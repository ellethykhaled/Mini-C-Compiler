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

extern void yyerror(const char *str);

int symbolCount = 0;
int scopeLevel = 0;

struct symbolItem {
    char* type;

    char *name;
    float value;
    char* stringValue;

    bool isFunction;
    bool isConstant;
    bool isInitialized;

    int scopeLevel;
}
symbolTable[MAX_SYMBOL_NUMBER];

void initSymbolTable();

int getSymbolIndex(char* s);

int declareNewSymbol(char* id, char* type);

void printSymbolTable();
