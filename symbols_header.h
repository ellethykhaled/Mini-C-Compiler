#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* Symbol Table definitions section */
#define MAX_SYMBOL_NUMBER 1000

#define TYPE_STRING "String"
#define TYPE_INT "Int"
#define TYPE_FLOAT "Float"
#define TYPE_BOOL "Boolean"
#define TYPE_VOID "Void"
#define TYPE_ENUM "Enum"

#define EQ_OP "=="
#define NEQ_OP "!="
#define GR_OP ">"
#define GRE_OP ">="
#define LS_OP "<"
#define LSE_OP "<="

#define ERROR_DECLARED -2
#define ERROR_UNDECLARED -3
#define ERROR_UNINITIALIZED -4
#define ERROR_TYPE_MISMATCH -5
#define ERROR_CONSTANT_REASSIGNMENT -6
#define TWO_NUMBERS_COMPARISON -7
#define ENUM_END -8
#define ERROR_MISSING_ARGUMENTS -9
#define ERROR_MORE_ARGUMENTS -10
#define PARAMETER_TYPE_MISMATCH -11
#define ERROR_SYMBOLS_EXCEEDED -12
#define ERROR_QUADRUPLES_EXCEEDED -13
#define SWITCH_TYPE_MISMATCH -14
#define ERROR_UNKNOWN -100
#define UNEXPECTED_CHARACTER -110

#define ALWAYS_TRUE_IF -200
#define ALWAYS_FALSE_IF -201


#define PARAMETER_INT       -101
#define PARAMETER_FLOAT     -102
#define PARAMETER_BOOL      -103
#define PARAMETER_STRING    -104

#define GLOBAL_NUMBER (MAX_SYMBOL_NUMBER + 1)
#define GLOBAL_STRING (MAX_SYMBOL_NUMBER + 2)
#define GLOBAL_VOID (MAX_SYMBOL_NUMBER + 3)

#define GLOBAL_UNCERTAIN (2 * MAX_SYMBOL_NUMBER)

void extern yyerror(const char *str);

FILE* symbolTableFile;
FILE* errorsFile;

int symbolCount = 0;
int scopeLevel = 0;
int lineNumber = 1;

float globalNumber;
char * globalString;
bool globalCertainString = true;

int globalParametersCount = 0;
int* globalParameters = NULL;

bool globalInitializer = false;

struct symbolItem {
    char* type;

    char* name;
    int value;
    float fValue;
    char* stringValue;

    bool isFunction;
    int* parameters;
    int parametersCount;

    bool isConstant;
    bool isInitialized;
    bool isUsed;

    bool isCertain;

    int scopeLevel;
}
symbolTable[MAX_SYMBOL_NUMBER];

void initSymbolTable();

int searchAndDeclare(char* id, char* type);

int getSymbolIndex(char* s);

int declareNewSymbol(char* id, char* type);

int assignValue(int symbolIndex, void* value, char* valueType);

int processComparator(float first, float second, char * operatorType);

void deleteLatestScope();

void sortEnumElements(int startIndex, int endIndex);

void assignEnumElements(int startIndex, int endIndex, char * enumName);

int defineNonVoidFunction(int functionIndex, int returnIndex);

void addArgumentParameter(int symbolIndex);

void ifStatementLogic(int ifLineNumber, int conditionResult);

void printSymbolTable();

void destroySymbolTable();

void handleError(const int, const int, const char*);