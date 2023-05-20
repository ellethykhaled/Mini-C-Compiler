%{
    /* Definition section */
    #include <stdio.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #ifndef HEADER_H
    #define HEADER_H
        #include "functions.c"
        #include "quadruples.c"
    #endif
    
    extern int yylex();
    
    extern FILE *yyin;

    extern int lineNumber;
%}

%token ERROR_TOKEN

%token INT_TYPE FLOAT_TYPE STRING_TYPE BOOLEAN_TYPE

%token CONSTANT

%token TRUE FALSE

%token M_OP_PLUS M_OP_MINUS M_OP_MULT M_OP_DIV M_OP_MOD M_OP_POWER
%left M_OP_PLUS M_OP_MINUS
%left M_OP_MULT M_OP_DIV M_OP_MOD
%right M_OP_POWER

%token L_OP_NOT L_OP_EXACT L_OP_AND L_OP_OR
%token OP_ASSIGN OP_EQUAL OP_NOT_EQUAL OP_LESS OP_LESS_EQUAL OP_GREATER OP_GREATER_EQUAL

%token TERMINATOR CLOSING_BRACKET OPENING_BLOCK_BRACES OPENING_BRACKET OPENING_BRACES

%token FOR WHILE REPEAT
%token RETURN

%token ENUM COMMA

%token THEN

%token DEFAULT

%token FUNCTION CALL VOID_TYPE

%union {
    struct symbolItem *sValue;

    int sIndex;
    char * sName;

    float fValue;
    int iValue;
    char * cValue;
}

%token <sName> IDENTIFIER
%token <iValue> INTEGER_NUMBER IF SWITCH CASE ELSE CLOSING_BRACES
%token <fValue> FLOAT_NUMBER
%token <cValue> STRING

%type <iValue> variable_assignment comparison_expression function_call constant_variable_declaration single_line enum_body function_definition
%type <fValue> expr maths_expr number return_value logical_expression logical_expression2
%type <sIndex> variable_or_function_declaration

%%

program :
        sub_program
        | program sub_program
        | RETURN return_value {
            // Completely ignored in case of non-functions
        }
        | RETURN VOID_TYPE {
            // Completely ignored in case of non-functions
        }
        ;

sub_program : 
        single_line TERMINATOR
        | if_stmt
        | for_loop
        | while_loop
        | do_while
        | switch_case { resetRegisters(); }
        | enumeration
        | function_definition
        | block_structure
        | ERROR_TOKEN { handleError(UNEXPECTED_CHARACTER, -1, ""); }

block_structure :
        OPENING_BLOCK_BRACES program CLOSING_BRACES
        | OPENING_BLOCK_BRACES CLOSING_BRACES

function_call :
        CALL IDENTIFIER OPENING_BRACKET function_arguments CLOSING_BRACKET {
            // Get the symbol from the symbol table
            int symbolIndex = getSymbolIndex($2);
            if (symbolIndex == -1)
                handleError(ERROR_UNDECLARED, -1, "");

            else if (symbolTable[symbolIndex].parametersCount > globalParametersCount) {
                char specialMessage[80];
                sprintf(specialMessage, "Arguments missing, found %d and required %d\n", globalParametersCount, symbolTable[symbolIndex].parametersCount);
                handleError(ERROR_MISSING_ARGUMENTS, -1, specialMessage);
            }
            else if (symbolTable[symbolIndex].parametersCount < globalParametersCount) {
                char specialMessage[80];
                sprintf(specialMessage, "A lot of arguments are provided, found %d and required %d\n", globalParametersCount, symbolTable[symbolIndex].parametersCount);
                handleError(ERROR_MORE_ARGUMENTS, -1, specialMessage);
            }
            else {
                for (int i = 0; i < globalParametersCount; i++) {
                    if (symbolTable[symbolIndex].parameters[i] != globalParameters[i]) {
                        handleError(PARAMETER_TYPE_MISMATCH, -1, "");
                        break;
                    }
                }
            }
            
            globalParametersCount = 0;
            globalParameters = NULL;

            if (symbolTable[symbolIndex].type == TYPE_VOID)
                $$ = GLOBAL_VOID;
            else {
                if (symbolTable[symbolIndex].isCertain) {
                    if (symbolTable[symbolIndex].type == TYPE_STRING) {
                        globalString = strdup(symbolTable[symbolIndex].stringValue);
                        $$ = GLOBAL_STRING;
                    }
                    // Return the symbol index
                    else
                        $$ = symbolIndex;
                }
                else
                    $$ = GLOBAL_UNCERTAIN;
            }
        }

function_arguments :
        { 
            globalParametersCount = 0;
            globalParameters = NULL;
        }
        | return_value function_arguments2  {
            int returnResult = $1;
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }

function_arguments2 :   
        | COMMA return_value function_arguments2 {   
            int returnResult = $2;
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }

function_definition :
        FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN return_value TERMINATOR CLOSING_BRACES {
            int functionIndex = $2;
            symbolTable[functionIndex].isFunction = true;

            int returnResult = $9;

            if (returnResult == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if (returnResult == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");

            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            setFunctionParameters(functionIndex);
        }
        | FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN return_value TERMINATOR CLOSING_BRACES {
            int functionIndex = $2;
            symbolTable[functionIndex].isFunction = true;

            int returnResult = $8;

            if (returnResult == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if (returnResult == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");
            
            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            setFunctionParameters(functionIndex);
        }
        | FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN VOID_TYPE TERMINATOR CLOSING_BRACES {
            // Get the symbol index from the symbol name
            char * symbolName = $3;
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            symbolTable[resultIndex].isFunction = true;
            
            setFunctionParameters(resultIndex);

            $$ = GLOBAL_VOID;
        }
        | FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN VOID_TYPE TERMINATOR CLOSING_BRACES {
            // Get the symbol index from the symbol name
            char * symbolName = $3;
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            symbolTable[resultIndex].isFunction = true;

            setFunctionParameters(resultIndex);

            $$ = GLOBAL_VOID;
        }

function_parameters :
        { 
            globalParametersCount = 0;
            globalParameters = NULL;
        }
        | variable_or_function_declaration function_parameters2 {
            int returnResult = $1;
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }

function_parameters2 :
        | COMMA variable_or_function_declaration function_parameters2 {
            int returnResult = $2;
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }

enumeration :
        ENUM IDENTIFIER OPENING_BRACES IDENTIFIER enum_body CLOSING_BRACES TERMINATOR {
            // Get the symbol index from the enum name
            char * firstElement = $4;
            int resultIndex = searchAndDeclare(firstElement, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
                
            int startIndex, endIndex;
            if ($5 != ENUM_END) {
                // Start index is the incoming value from the enum_body
                startIndex = $5;
                // End index is the index of the first element of the enum
                endIndex = resultIndex;

                sortEnumElements(startIndex, endIndex);
            }
            else {
                startIndex = resultIndex;
                endIndex = resultIndex;
            }

            // Get the symbol index from the enum name
            char * enumName = $2;

            assignEnumElements(startIndex, endIndex, enumName);
        }

enum_body :
        { $$ = ENUM_END; } | COMMA IDENTIFIER enum_body {
            // Get the symbol index from the identifier name
            int resultIndex = searchAndDeclare($2, TYPE_INT);
            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            if ($3 == ENUM_END)
                $$ = resultIndex;
            else
                $$ = $3;
        }

switch_case :
        SWITCH IDENTIFIER OPENING_BRACES switch_body switch_end CLOSING_BRACES {
            int resultIndex = getSymbolIndex($2);
            if (resultIndex == -1)
                handleError(ERROR_UNDECLARED, $1, "");
            else if (symbolTable[resultIndex].type != TYPE_INT) {
                handleError(SWITCH_TYPE_MISMATCH, $1, "");
            }
            else if (symbolTable[resultIndex].isInitialized == false) {
                handleError(ERROR_UNINITIALIZED, $1, "");
            }
        }
        | SWITCH IDENTIFIER OPENING_BRACES switch_end CLOSING_BRACES {
            int resultIndex = getSymbolIndex($2);
            if (resultIndex == -1)
                handleError(ERROR_UNDECLARED, $1, "");
            else if (symbolTable[resultIndex].type != TYPE_INT) {
                handleError(SWITCH_TYPE_MISMATCH, $1, "");
            }
        }

switch_body :
        CASE return_value OPENING_BRACES program CLOSING_BRACES {
            if ((int) $2 != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, $1, "");
        }
        | CASE return_value OPENING_BRACES CLOSING_BRACES {
            if ((int) $2 != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, $1, "");
        }
        | switch_body CASE return_value OPENING_BRACES program CLOSING_BRACES {
            if ((int) $3 != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, $2, "");
        }
        | switch_body CASE return_value OPENING_BRACES CLOSING_BRACES {
            if ((int) $3 != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, $2, "");
        }

switch_end :
        DEFAULT OPENING_BRACES program CLOSING_BRACES
        | DEFAULT OPENING_BRACES CLOSING_BRACES

single_line : 
        expr {
            // Return the symbol index
            $$ = $1;
        }
        | constant_variable_declaration {
            // Return the symbol index
            $$ = $1;
        }
        | variable_or_function_declaration {
            // Return the symbol index
            $$ = $1;
        }
        | variable_assignment {
            // Return the symbol index
            $$ = $1;
        }

while_loop :
        WHILE OPENING_BRACKET single_line CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES
        | WHILE OPENING_BRACKET single_line CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES
do_while :
        REPEAT OPENING_BRACES program CLOSING_BRACES WHILE single_line
        | REPEAT OPENING_BRACES CLOSING_BRACES WHILE single_line

for_loop :
        FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES {
        }
        | FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES {
        }

line_or_null :
    | single_line

if_stmt :
        IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES program CLOSING_BRACES else_stmt {
            ifStatementLogic($1, $3);
        }
        | IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES CLOSING_BRACES else_stmt {
            ifStatementLogic($1, $3);
        }

else_stmt :
        | ELSE OPENING_BRACES program CLOSING_BRACES else_stmt {
        }
        | ELSE OPENING_BRACES CLOSING_BRACES else_stmt {
        }

constant_variable_declaration :
        CONSTANT variable_assignment {
            // Using this grammar rule, a non-constant variable can be set as a constant after declaration
            // i.e.:
            // int i = 60;
            // const i = ay 7aga; // can be -> const i = i;
            // now i is a constant with the new assigned value
            int symbolIndex = $2;

            symbolTable[symbolIndex].isConstant = true;

            $$ = symbolIndex;
        }

variable_or_function_declaration :
        INT_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            $$ = result;
        }
        | FLOAT_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_FLOAT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            $$ = result;
        }
        | STRING_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_STRING);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            $$ = result;
        }
        | BOOLEAN_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_BOOL);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            $$ = result;
        }

variable_assignment :
        IDENTIFIER OP_ASSIGN expr {
            int symbolIndex = getSymbolIndex($1);
            if (symbolIndex == -1)
                handleError(ERROR_UNDECLARED, -1, "");

            int assignmentStatus;
            // In case the function is of type void
            if ($3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if ($3 == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&$3, TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                handleError(ERROR_CONSTANT_REASSIGNMENT, -1, "");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if (assignmentStatus == ERROR_UNKNOWN)
                handleError(ERROR_UNKNOWN, -1, "");
            
            // The assignmentStatus holds the symbolIndex if any
            $$ = assignmentStatus;

            // Store the value stored in the register to the variable
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister - 1);

            addQuadruple(STR, symbolTable[symbolIndex].name, tempBuffer, "");
            resetRegisters();
        }
        | variable_or_function_declaration OP_ASSIGN expr {
            // Declare and assign a variable
            int symbolIndex = $1;

            int assignmentStatus;
            // In case the function is of type void
            if ($3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if ($3 == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&$3, TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                handleError(ERROR_CONSTANT_REASSIGNMENT, -1, "");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if (assignmentStatus == ERROR_UNKNOWN)
                handleError(ERROR_UNKNOWN, -1, "");
            // The assignmentStatus holds the symbolIndex if any
            $$ = assignmentStatus;

            // Store the value stored in the register to the variable
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister - 1);

            addQuadruple(STR, symbolTable[symbolIndex].name, tempBuffer, "");
            resetRegisters();
        }

expr :
        maths_expr {
            // Return the symbol index or global reference (string or number)
            if ($1 == GLOBAL_STRING)
                $$ = GLOBAL_STRING;
            else if ($1 == GLOBAL_VOID)
                $$ = GLOBAL_VOID;
            else if ($1 == GLOBAL_NUMBER)
                $$ = globalNumber;
            else if ($1 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else
                $$ = $1;
        }
        | logical_expression {
            // Return the symbol index or global reference (string or number)
            $$ = $1;
        }

maths_expr : maths_expr M_OP_PLUS maths_expr %prec M_OP_PLUS {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            $$ = $1 + $3;

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - (2 + 2 * instructionsConsidered));

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(ADD, tempBuffer1, tempBuffer2, tempBuffer3);
        }
        | maths_expr M_OP_MINUS maths_expr %prec M_OP_MINUS {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            $$ = $1 - $3;

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - (2 + 2 * instructionsConsidered));

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(SUB, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        }
        | maths_expr M_OP_MULT maths_expr %prec M_OP_MULT {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            $$ = $1 * $3;

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(MUL, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        }
        | maths_expr M_OP_DIV maths_expr %prec M_OP_DIV {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            $$ = $1 / $3;

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(DIV, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        }
        | maths_expr M_OP_MOD maths_expr %prec M_OP_MOD {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            $$ = (int) $1 % (int) $3;
        }
        | maths_expr M_OP_POWER maths_expr %prec M_OP_POWER {
            int answer = 1;
            for (int i = 0; i < $3; i++)
                answer *= $1;
            $$ = answer;
        }
        | return_value {
            if ($1 == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if ($1 == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");
            else if ($1 == GLOBAL_STRING){
                $$ = GLOBAL_STRING;
            }
            else if ($1 == GLOBAL_VOID){
                $$ = GLOBAL_VOID;
            }
            else if ($1 == GLOBAL_NUMBER){
                $$ = globalNumber;
            }
            else if ($1 == GLOBAL_UNCERTAIN){
                $$ = GLOBAL_UNCERTAIN;
            }
            else {
                int symbolIndex = (int) $1;
                if (symbolTable[symbolIndex].type == TYPE_STRING){

                    // Check if certain
                    globalCertainString = symbolTable[symbolIndex].isCertain;
                    if (globalCertainString)
                        globalString = strdup(symbolTable[symbolIndex].stringValue);
                    else
                    // The else here is to prevent segmentation error in further propagation
                        globalString = strdup("?");

                    $$ = GLOBAL_STRING;
                }
                else if (symbolTable[symbolIndex].isCertain == false)
                    $$ = GLOBAL_UNCERTAIN;
                else if (symbolTable[symbolIndex].type == TYPE_INT || symbolTable[symbolIndex].type == TYPE_BOOL)
                    $$ = symbolTable[symbolIndex].value;
                else if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                    $$ = symbolTable[symbolIndex].fValue;
            }
        }
        | OPENING_BRACKET maths_expr CLOSING_BRACKET {
            $$ = $2;
        }

return_value :
        IDENTIFIER {
            int symbolIndex = getSymbolIndex($1);
            // In case of undeclared symbol
            if (symbolIndex == -1) {
                $$ = ERROR_UNDECLARED;
            }
            // In case of uninitialized symbol
            else if (symbolTable[symbolIndex].isInitialized != true) {
                $$ = ERROR_UNINITIALIZED;
            }
            // Otherwise return the symbol index
            else {
                symbolTable[symbolIndex].isUsed = true;
                $$ = symbolIndex;
            }
        }
        | STRING {
            // Return the global string indicator
            globalString = strdup($1);
            globalCertainString = true;
            $$ = GLOBAL_STRING;
        }
        | number {
            // Return the global number indicator
            globalNumber = $1;
            $$ = GLOBAL_NUMBER;

            // Store the number into a register
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister++);

            char tempBuffer2[5];
            sprintf(tempBuffer2, "%.2f", globalNumber);
            addQuadruple(MOV, tempBuffer, tempBuffer2, "");
        }
        | function_call {
            // Return the symbol index for the function
            $$ = $1;
        }

number :
        INTEGER_NUMBER {
            $$ = (int) $1;
        }
        | FLOAT_NUMBER {
            $$ = $1;
        }

logical_expression :
        logical_expression L_OP_AND logical_expression2 {
            // In case the function is of type void
            if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else
                $$ = $1 && $3;

            // AND Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(AND, tempBuffer1, tempBuffer2, tempBuffer3);
        }
        | logical_expression L_OP_OR logical_expression2 {
            // In case the function is of type void
            if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else
                $$ = $1 || $3;

            // OR Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(OR, tempBuffer1, tempBuffer2, tempBuffer3);
        }
        | logical_expression2 {
            $$ = $1;
        }


logical_expression2 :
        L_OP_NOT logical_expression2 {
            // In case the function is of type void
            if ($2 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($2 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else
                $$ = !$2;
            
            // NOT Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 1);

            addQuadruple(NOT, tempBuffer1, tempBuffer1, "");
        }
        | L_OP_NOT return_value {
            // In case the function is of type void
            if ($2 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($2 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = $2;
                float value;
                if (symbolIndex == GLOBAL_STRING)
                    handleError(ERROR_TYPE_MISMATCH, -1, "");
                else if (symbolIndex == GLOBAL_NUMBER)
                    value = globalNumber;
                else {
                    if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                        value = symbolTable[symbolIndex].fValue;
                    else
                        value = symbolTable[symbolIndex].value;
                }
                if (value == 0)
                    $$ = 1;
                else
                    $$ = 0;
            }
        }
        | L_OP_EXACT return_value {
            // In case the function is of type void
            if ($2 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($2 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = $2;
                float value;
                if (symbolIndex == GLOBAL_STRING)
                    handleError(ERROR_TYPE_MISMATCH, -1, "");
                else if (symbolIndex == GLOBAL_NUMBER)
                    value = globalNumber;
                else {
                    if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                        value = symbolTable[symbolIndex].fValue;
                    else
                        value = symbolTable[symbolIndex].value;
                }
                if (value == 0) {
                    $$ = 0;
                    // Put 1 into register
                    char tempBuffer1[3];
                    sprintf(tempBuffer1, "R%d", currentRegister++);

                    addQuadruple(MOV, tempBuffer1, "0", "");
                }
                else {
                    $$ = 1;
                    // Put 0 into register
                    char tempBuffer1[3];
                    sprintf(tempBuffer1, "R%d", currentRegister++);

                    addQuadruple(MOV, tempBuffer1, "1", "");
                }
            }
        }
        | TRUE {
            $$ = true;
            // Put 1 into register
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister++);

            addQuadruple(MOV, tempBuffer1, "1", "");
        }
        | FALSE {
            $$ = false;
            // Put 0 into register
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister++);

            addQuadruple(MOV, tempBuffer1, "0", "");
        }
        | comparison_expression {
            $$ = $1;
        }
        | OPENING_BRACKET logical_expression CLOSING_BRACKET {
            $$ = $2;
        }

comparison_expression :
        return_value OP_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator($1, $3, EQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                $$ = result;
                
                // Compare the return values
                char tempBuffer1[8];
                if ($1 == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)$1].name);

                char tempBuffer2[8];
                if ($3 == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)$3].name);

                addQuadruple(CMPEQ, tempBuffer1, tempBuffer2, "");
            }
        }
        | return_value OP_NOT_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator($1, $3, NEQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                $$ = result;

                // Compare the return values
                char tempBuffer1[8];
                if ($1 == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)$1].name);

                char tempBuffer2[8];
                if ($3 == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)$3].name);

                addQuadruple(CMPNEQ, tempBuffer1, tempBuffer2, "");
            }
        }
        | return_value OP_LESS return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator($1, $3, LS_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                $$ = result;

                // Compare the return values
                char tempBuffer1[8];
                if ($1 == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)$1].name);

                char tempBuffer2[8];
                if ($3 == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)$3].name);

                addQuadruple(CMPLT, tempBuffer1, tempBuffer2, "");
            }
        }
        | return_value OP_LESS_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            // In case the function is of type void
            else if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator($1, $3, LSE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                $$ = result;

                // Compare the return values
                char tempBuffer1[8];
                if ($1 == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)$1].name);

                char tempBuffer2[8];
                if ($3 == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)$3].name);

                addQuadruple(CMPLE, tempBuffer1, tempBuffer2, "");
            }
        }
        | return_value OP_GREATER return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator($1, $3, GR_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                $$ = result;

                // Compare the return values
                char tempBuffer1[8];
                if ($1 == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)$1].name);

                char tempBuffer2[8];
                if ($3 == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)$3].name);

                addQuadruple(CMPGT, tempBuffer1, tempBuffer2, "");
            }
        }
        | return_value OP_GREATER_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ($1 == GLOBAL_VOID || $3 == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ($1 == GLOBAL_UNCERTAIN || $3 == GLOBAL_UNCERTAIN)
                $$ = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator($1, $3, GRE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                $$ = result;

                // Compare the return values
                char tempBuffer1[8];
                if ($1 == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)$1].name);

                char tempBuffer2[8];
                if ($3 == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)$3].name);

                addQuadruple(CMPGE, tempBuffer1, tempBuffer2, "");
            }
        }

%%

  
int main(int argc, char *argv[])
{
    initSymbolTable();

    yyin = fopen(argv[1], "r");

    symbolTableFile = fopen(argv[2], "w");
    quadruplesFile = fopen(argv[3], "w");
    errorsFile = fopen(argv[4], "w");
  
    yyparse();

    fclose(yyin);

    destroySymbolTable();

    printQuadruples();
    destroyQuadruples();

    fclose(symbolTableFile);
    fclose(quadruplesFile);
    fclose(errorsFile);

    return 0;
}