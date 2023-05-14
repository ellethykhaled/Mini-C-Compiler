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

int assignValue(int symbolIndex, void* value, char* valueType) {
    // In case the symbol is a constant and is being initialized
    if (symbolTable[symbolIndex].isConstant == true && symbolTable[symbolIndex].isInitialized == true) {
        return ERROR_CONSTANT_REASSIGNMENT;
    }
    
    // In case of value float, case it in case of number 
    if (valueType == TYPE_FLOAT) {
        if (symbolTable[symbolIndex].type == TYPE_FLOAT) {
            symbolTable[symbolIndex].fValue = *(float*) value;
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;
            
            return symbolIndex;
        }
        else if (symbolTable[symbolIndex].type == TYPE_INT) {
            symbolTable[symbolIndex].value = (int) *(float*) value;
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;
            
            return symbolIndex;
        }
        else if (symbolTable[symbolIndex].type == TYPE_BOOL) {
            symbolTable[symbolIndex].value = (int) *(float*) value;
            if ((int) *(float*) value == 0)
                symbolTable[symbolIndex].value = 0;
            else
                symbolTable[symbolIndex].value = 1;
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;
            
            return symbolIndex;
        }
        else
            return ERROR_TYPE_MISMATCH;
    }
     // In case of value integer, case it in case of number
    else if (valueType == TYPE_INT) {
        if (symbolTable[symbolIndex].type == TYPE_FLOAT) {
            symbolTable[symbolIndex].fValue = (float) *(int*) value;
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;
            
            return symbolIndex;
        }
        else if (symbolTable[symbolIndex].type == TYPE_INT) {
            symbolTable[symbolIndex].value = *(int*) value;
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;
            
            return symbolIndex;
        }
        else
            return ERROR_TYPE_MISMATCH;
    }
    // In case of value bool, case it in case of bool
    else if (valueType == TYPE_BOOL) {
        if (symbolTable[symbolIndex].type == TYPE_BOOL) {
            symbolTable[symbolIndex].value = *(bool*) value;
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;
            
            return symbolIndex;
        }
        else
            return ERROR_TYPE_MISMATCH;
    }
    // In case of value string, case it in case of string
    else if (valueType == TYPE_STRING) {
        if (symbolTable[symbolIndex].type == TYPE_STRING) {
            symbolTable[symbolIndex].stringValue = strdup((char*) value);
            // Mark the symbol as being initialized
            symbolTable[symbolIndex].isInitialized = true;

            return symbolIndex;
        }
        else
            return ERROR_TYPE_MISMATCH;
    }

    return ERROR_UNKNOWN;
}

int processComparator(float first, float second, char * operatorType) {
    float firstValue, secondValue;

    // Flags to check if both incoming operands are direct values
    bool isFirstGlobal = false;
    bool isSecondGlobal = false;

    // Parsing the first incoming value
    if (first == GLOBAL_NUMBER) {
        firstValue = globalNumber;
        isFirstGlobal = true;
    }
    else {
        int symbolIndex = first;
        if (symbolTable[symbolIndex].type == TYPE_FLOAT)
            firstValue = symbolTable[symbolIndex].fValue;
        else
            firstValue = symbolTable[symbolIndex].value;
    }

    
    // Parsing the second incoming value
    if (second == GLOBAL_NUMBER) {
        secondValue = globalNumber;
        isSecondGlobal = true;
    }
    else {
        int symbolIndex = second;
        if (symbolTable[symbolIndex].type == TYPE_FLOAT)
            secondValue = symbolTable[symbolIndex].fValue;
        else
            secondValue = symbolTable[symbolIndex].value;
    }

    // Return error status in case both operands are direct numbers
    if (isFirstGlobal && isSecondGlobal)
        return TWO_NUMBERS_COMPARISON;
    
    // Return the value based on the operator
    if (operatorType == EQ_OP)
        return firstValue == secondValue;
    else if (operatorType == NEQ_OP) 
        return firstValue != secondValue;
    else if (operatorType == GR_OP) 
        return firstValue > secondValue;
    else if (operatorType == GRE_OP) 
        return firstValue >= secondValue;
    else if (operatorType == LS_OP) 
        return firstValue < secondValue;
    else if (operatorType == LSE_OP) 
        return firstValue <= secondValue;
    
    return ERROR_UNKNOWN;
}

void printSymbolTable() {
    printf("\t\t    Symbol-Table\n");
    // I|C indicated initialized and constant
    printf("Type\t\tName\t\tI|C\tValue\n");
    for(int i = 0; i < symbolCount; i++) {
        // Print format in case of function
        if (symbolTable[i].isFunction == true)
            printf("%s\t\t%s\t\t _ \tfunction\n", symbolTable[i].type, symbolTable[i].name);
        else {
        // Print format in case of non-function
            if (symbolTable[i].type == TYPE_STRING)
                printf("%s\t\t%s\t\t%d-%d\t%s\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].isInitialized == true, symbolTable[i].isConstant == true, symbolTable[i].stringValue);
            else if (symbolTable[i].type == TYPE_FLOAT)
                printf("%s\t\t%s\t\t%d-%d\t%f\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].isInitialized == true, symbolTable[i].isConstant == true, symbolTable[i].fValue);
            else if (symbolTable[i].type == TYPE_BOOL || symbolTable[i].type == TYPE_INT)
                printf("%s\t\t%s\t\t%d-%d\t%d\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].isInitialized == true, symbolTable[i].isConstant == true, symbolTable[i].value);
        }
    }
    printf("\n");
}