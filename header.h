#define MAX_SYMBOL_NUMBER 1000
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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

void printSymbolTable();

struct symbolItem * findSymbol(char* s);