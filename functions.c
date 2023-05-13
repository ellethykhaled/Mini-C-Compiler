#include "header.h"

void initSymbolTable() {
    // Initialize all elements in the symbolTable
    for (int i = 0; i < MAX_SYMBOL_NUMBER; i++) {
        symbolTable[i].type = "";
        symbolTable[i].scopeLevel = -1;
    }
}

int getSymbolIndex(char* s) {
    if (symbolCount == MAX_SYMBOL_NUMBER) {
        // In case the symbol count exceeded the maximum symbol count
        char * errorMessage = "Number of symbols exceeded ";
        sprintf(errorMessage, "%d\n", MAX_SYMBOL_NUMBER);

        yyerror(errorMessage);
    }

    int nearestSymbolIndex = -1;

    for (int i = 0; i < symbolCount; i++) {
        // Check if we looped on all declared symbols
        if(!symbolTable[i].name) {
            // Return the nearest symbol based on scope-level if any
            if (nearestSymbolIndex != -1)
                return nearestSymbolIndex;
            return i;
        }

        // Check if the name matches, assign the nearest symbol
        if (strcmp(symbolTable[i].name, s) == 0)
            nearestSymbolIndex = i;
    }
    return nearestSymbolIndex;
}

int declareNewSymbol(char* id, char* type) {
    symbolTable[symbolCount].name = id;
    symbolTable[symbolCount].type = type;
    symbolTable[symbolCount].scopeLevel = scopeLevel;
    symbolCount++;
    return symbolCount - 1;
}

void printSymbolTable() {
    printf("Symbol Table:\n");
    for(int i = 0; i < symbolCount; i++)
        printf("%s\t %s\t %f\t %s\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].value, symbolTable[i].stringValue);
}