#include "header.h"

struct symbolItem * findSymbol(char* s) {

    struct symbolItem * symItem;
    struct symbolItem * nearestSymbol = NULL;

    for (symItem = symbolTable; symItem < &symbolTable[MAX_SYMBOL_NUMBER] ; symItem++) {
        
        // Check if we looped on all declared symbols
        if(!symItem->name) {
            if (nearestSymbol != NULL)
                return nearestSymbol;
            symItem->name = strdup(s);
            return symItem;
        }

        // Check if the name matches, assign the nearest symbol
        if (symItem->name && !strcmp(symItem->name, s))
            nearestSymbol = symItem;
    }
}