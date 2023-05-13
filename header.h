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

#define ERROR_DECLARED -2
#define ERROR_UNDECLARED -3
#define ERROR_TYPE_MISMATCH -4
#define ERROR_CONSTANT_REASSIGNMENT -5
#define ERROR -6
#define ERROR_UNKNOWN -100

extern void yyerror(const char *str);

int symbolCount = 0;
int scopeLevel = 0;

struct symbolItem {
    char* type;

    char *name;
    int value;
    float fValue;
    char* stringValue;

    bool isFunction;
    bool isConstant;
    bool isInitialized;

    int scopeLevel;
}
symbolTable[MAX_SYMBOL_NUMBER];

void initSymbolTable();

int searchAndDeclare(char* id, char* type);

int getSymbolIndex(char* s);

int declareNewSymbol(char* id, char* type);

int assignValue(int symbolIndex, void* value, char* valueType);

void printSymbolTable();
