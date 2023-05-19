#include "header.h"

void initSymbolTable() {
    // Initialize all elements in the symbolTable
    for (int i = 0; i < MAX_SYMBOL_NUMBER; i++) {
        symbolTable[i].type = "";
        symbolTable[i].scopeLevel = -1;
        symbolTable[i].isCertain = true;

        symbolTable[i].parameters = NULL;
        symbolTable[i].parametersCount = 0;
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

    // Important for function parameters
    if (globalInitializer) {
        symbolTable[symbolCount].isCertain = false;
        symbolTable[symbolCount].isInitialized = true;
    }

    return symbolCount++;
}

int searchAndDeclare(char* symbolName, char* type) {
    // Get the symbol index from the symbol name
    int symbolIndex = getSymbolIndex(symbolName);
    
    // Declare a new symbol in case of no symbol found or we are in a sub scope
    if (symbolIndex == -1 || symbolTable[symbolIndex].scopeLevel < scopeLevel)
        return declareNewSymbol(symbolName, type);
    else
        return ERROR_DECLARED;
}

int assignValue(int symbolIndex, void* value, char* valueType) {
    // In case the symbol is a constant and is being initialized
    if (symbolTable[symbolIndex].isConstant == true && symbolTable[symbolIndex].isInitialized == true) {
        return ERROR_CONSTANT_REASSIGNMENT;
    }

    // Set the flag for marking the variable as having an untraceable value (out of compilers scope)
    symbolTable[symbolIndex].isCertain = symbolTable[symbolIndex].scopeLevel == scopeLevel;
    
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

void deleteLatestScope() {
    for (int i = 0; i < symbolCount; i++)
    {
        int currentScopeLevel = symbolTable[i].scopeLevel;

        if (currentScopeLevel == scopeLevel) {
            symbolCount = i;
            break;
        }
    }
    
}

void sortEnumElements(int startIndex, int endIndex) {
    // First loop for sorting reversed elements (all elements except enum name and first element)
    for (int i = startIndex; i < (endIndex - 1 + startIndex) / 2; i++)
    {
        int topCap = endIndex - 1 - (i - startIndex);
        char* tempName = symbolTable[i].name;
        symbolTable[i].name = symbolTable[topCap].name;
        symbolTable[topCap].name = tempName;
    }

    // Second loop to consider the first element
    char * temp;
    for (int i = startIndex; i <= endIndex; i++)
    {
        int prevIndex = i - 1;
        if (prevIndex == startIndex - 1)
            prevIndex = endIndex;

        char * prevName = strdup(temp);
        temp = strdup(symbolTable[i].name);
        symbolTable[i].name = strdup(prevName);
    }
}

void assignEnumElements(int startIndex, int endIndex, char * enumName) {

    // Get the symbol index from the symbol name
    int symbolIndex = getSymbolIndex(enumName);

    // Declare a new symbol in case of no symbol found or we are in a sub scope
    if (symbolIndex == -1 || symbolTable[symbolIndex].scopeLevel < scopeLevel)
    {
        // Set the symbol name, type and scope level then increment the symbol count 
        for (int i = endIndex + 1; i > startIndex; i--) {
            symbolTable[i].name = symbolTable[i - 1].name;
            symbolTable[i].type = TYPE_INT;
            symbolTable[i].scopeLevel = scopeLevel;
        }

        // Declare the enum's symbol
        symbolTable[startIndex].name = enumName;
        symbolTable[startIndex].type = TYPE_ENUM;
        symbolTable[startIndex].scopeLevel = scopeLevel;
        symbolCount++;
    }
    else
        yyerror("Symbol declared");
        
    // Assign ascending values to enum elements;
    int value = 0;
    for (int i = startIndex + 1; i <= endIndex + 1; i++) {
        symbolTable[i].value = value++;
        symbolTable[i].isInitialized = true;
        symbolTable[i].isConstant = true;
    }
}

int defineNonVoidFunction(int functionIndex, int returnIndex) {
    int assignmentStatus;
    if (returnIndex == GLOBAL_STRING)
        // Try to assign the global string
        assignmentStatus = assignValue(functionIndex, (void*)&globalString, TYPE_STRING);
    else if (returnIndex == GLOBAL_NUMBER)
        // Try to assign the global number
        assignmentStatus = assignValue(functionIndex, (void*)&globalNumber, TYPE_FLOAT);
    else {
        if (symbolTable[returnIndex].type == TYPE_FLOAT)
            // Try to assign the float from incoming from the identifier
            assignmentStatus = assignValue(functionIndex, (void*)&symbolTable[returnIndex].fValue, TYPE_FLOAT);
        else if (symbolTable[returnIndex].type == TYPE_INT || symbolTable[returnIndex].type == TYPE_BOOL)
            // Try to assign the int/bool from incoming from the identifier
            assignmentStatus = assignValue(functionIndex, (void*)&symbolTable[returnIndex].value, TYPE_INT);
        else if (symbolTable[returnIndex].type == TYPE_STRING)
            // Try to assign the string from incoming from the identifier
            assignmentStatus = assignValue(functionIndex, (void*)&symbolTable[returnIndex].stringValue, TYPE_STRING);
    }

    if (globalParametersCount > 0) {
        symbolTable[functionIndex].parameters = globalParameters;
        symbolTable[functionIndex].parametersCount = globalParametersCount;
    }
    globalParametersCount = 0;
    globalParameters = NULL;

    return assignmentStatus;
}

void addArgumentParameter(int symbolIndex) {
    // Add the argument to the array of parameters
    globalParameters = realloc(globalParameters, (globalParametersCount + 1) * sizeof(int));
    for (int i = globalParametersCount; i > 0; i--)
        globalParameters[i] = globalParameters[i - 1];
    
    // A function that adds the type of parameter/argument to the array of paramters
    if (symbolIndex == GLOBAL_NUMBER)
        globalParameters[0] = PARAMETER_FLOAT;
    else if (symbolIndex == GLOBAL_STRING)
        globalParameters[0] = PARAMETER_STRING;
    else if (symbolTable[symbolIndex].type == TYPE_INT)
        globalParameters[0] = PARAMETER_INT;
    else if (symbolTable[symbolIndex].type == TYPE_FLOAT)
        globalParameters[0] = PARAMETER_FLOAT;
    else if (symbolTable[symbolIndex].type == TYPE_STRING)
        globalParameters[0] = PARAMETER_STRING;
    else if (symbolTable[symbolIndex].type == TYPE_BOOL)
        globalParameters[0] = PARAMETER_BOOL;
            
    globalParametersCount++;
}

void printSymbolTable() {
    printf("================================================================\n");
    printf("\t\t\t    Symbol-Table\n");
    // I|C indicated initialized and constant
    printf("Type\t\tName\t\tI|C\tValue\t\tScope\n");
    for(int i = 0; i < symbolCount; i++) {
        // Print format in case of function
        if (symbolTable[i].isFunction == true) {
            printf("%s\t\t%s\t\t _ \tfunction\t%d\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].scopeLevel);
            // Print parameter types by order if any
            printf("---Function parameters: ");
            if (symbolTable[i].parametersCount > 0) {
                for (int j = 0; j < symbolTable[i].parametersCount; j++) {
                    if (symbolTable[i].parameters[j] == PARAMETER_INT)
                        printf("Integer");
                    else if (symbolTable[i].parameters[j] == PARAMETER_FLOAT)
                        printf("Float");
                    else if (symbolTable[i].parameters[j] == PARAMETER_BOOL)
                        printf("Boolean");
                    else if (symbolTable[i].parameters[j] == PARAMETER_STRING)
                        printf("String");
                    if (j != symbolTable[i].parametersCount - 1)
                        printf(" - ");
                }
                printf("\n");
            }
            else
                printf("None\n");
        }
        else {
        // Print format in case of non-function
            if (symbolTable[i].type == TYPE_STRING)
                printf("%s\t\t%s\t\t%d-%d\t%s\t\t%d\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].isInitialized == true, symbolTable[i].isConstant == true, symbolTable[i].stringValue, symbolTable[i].scopeLevel);
            else if (symbolTable[i].type == TYPE_FLOAT)
                printf("%s\t\t%s\t\t%d-%d\t%f\t%d\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].isInitialized == true, symbolTable[i].isConstant == true, symbolTable[i].fValue, symbolTable[i].scopeLevel);
            else if (symbolTable[i].type == TYPE_BOOL || symbolTable[i].type == TYPE_INT)
                printf("%s\t\t%s\t\t%d-%d\t%d\t\t%d\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].isInitialized == true, symbolTable[i].isConstant == true, symbolTable[i].value, symbolTable[i].scopeLevel);
            else if (symbolTable[i].type == TYPE_ENUM)
                printf("%s\t\t%s\t\t _ \tenum\t\t%d\n", symbolTable[i].type, symbolTable[i].name, symbolTable[i].scopeLevel);
        }
    }
    printf("\n");
}

void destroySymbolTable() {
    for (int i = 0; i < symbolCount; i++)
        free(symbolTable[i].parameters);
}