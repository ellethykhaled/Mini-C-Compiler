#include "header.h"

struct symbolItem * findSymbol(char* s) {

    struct symbolItem * symItem;
    struct symbolItem * nearestSymbol = NULL;

    for (symItem = symbolTable; symItem < &symbolTable[MAX_SYMBOL_NUMBER] ; symItem++) {
        
        // Check if we looped on all declared symbols
        if(!symItem->name) {
            // Return the nearest symbol based on scope-level if any
            if (nearestSymbol != NULL)
                return nearestSymbol;
            symItem->name = strdup(s);
            return symItem;
        }

        // Check if the name matches, assign the nearest symbol
        if (symItem->name && !strcmp(symItem->name, s))
            nearestSymbol = symItem;
    }

    char * errorMessage = "Number of symbols exceeded ";
    sprintf(errorMessage, "%d\n", MAX_SYMBOL_NUMBER);
    
    yyerror(errorMessage);
}