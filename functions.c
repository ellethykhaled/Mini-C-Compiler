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
    // Set the symbol name, type and scope level then increment the symbol count 
    symbolTable[symbolCount].name = id;
    symbolTable[symbolCount].type = type;
    symbolTable[symbolCount].scopeLevel = scopeLevel;

    return symbolCount++;
}

int searchAndDeclare(char* symbolName, char* type) {
    // Get the symbol index from the symbol name
    int symbolIndex = getSymbolIndex(symbolName);
    
    // Declare a new symbol in case of no symbol found or we are in a sub scope
    if (symbolIndex == -1 || symbolTable[symbolIndex].scopeLevel < scopeLevel)
        return declareNewSymbol(symbolName, type);
    else
        return -2;
}

void printSymbolTable() {
    printf("Symbol Table:\n");
    for(int i = 0; i < symbolCount; i++) {
        // Print format in case of function
        if (symbolTable[i].isFunction == true)
            printf("%s\t %s\t function\n", symbolTable[i].type, symbolTable[i].name);
        else {
        // Print format in case of non-function
            if (symbolTable[i].type == TYPE_STRING)
                printf("%s\t %s\t %s\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].stringValue);
            else
                printf("%s\t %s\t %f\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].value);
        }
    }
}