#define MAX_SYMBOL_NUMBER 1000
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
#define ERROR_UNKNOWN -100

#define GLOBAL_NUMBER (MAX_SYMBOL_NUMBER + 1)
#define GLOBAL_STRING (MAX_SYMBOL_NUMBER + 2)
#define GLOBAL_VOID (MAX_SYMBOL_NUMBER + 3)

#define GLOBAL_UNCERTAIN (2 * MAX_SYMBOL_NUMBER)

extern void yyerror(const char *str);

int symbolCount = 0;
int scopeLevel = 0;

float globalNumber;
char * globalString;

struct symbolItem {
    char* type;

    char *name;
    int value;
    float fValue;
    char* stringValue;

    bool isFunction;
    bool isConstant;
    bool isInitialized;

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

void printSymbolTable();
