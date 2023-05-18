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
    #endif
    
    extern int yylex();
    
    extern FILE *yyin;

    int lineNumber = 1;
%}

%token INT_TYPE FLOAT_TYPE STRING_TYPE BOOLEAN_TYPE

%token CONSTANT

%token TRUE FALSE

%token M_OP_PLUS M_OP_MINUS M_OP_MULT M_OP_DIV M_OP_MOD M_OP_POWER
%left M_OP_PLUS M_OP_MINUS
%left M_OP_MULT M_OP_DIV M_OP_MOD
%right M_OP_POWER

%token L_OP_NOT L_OP_EXACT L_OP_AND L_OP_OR
%token OP_ASSIGN OP_EQUAL OP_NOT_EQUAL OP_LESS OP_LESS_EQUAL OP_GREATER OP_GREATER_EQUAL

%token TERMINATOR CLOSING_BRACKET OPENING_BLOCK_BRACES OPENING_BRACKET CLOSING_BRACES OPENING_BRACES

%token FOR WHILE REPEAT
%token RETURN

%token ENUM COMMA

%token IF THEN ELSE

%token SWITCH CASE DEFAULT

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
%token <iValue> INTEGER_NUMBER
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
        single_line TERMINATOR {
            printSymbolTable();
        }
        | if_stmt
        | for_loop
        | while_loop { printf("While loop\n"); }
        | do_while { printf("Repeat-until/Do-while loop\n"); }
        | switch_case { printf("Switch case\n"); }
        | enumeration
        | function_definition
        | block_structure { printf("Block structure\n"); }

block_structure :
        OPENING_BLOCK_BRACES program CLOSING_BRACES
        | OPENING_BLOCK_BRACES CLOSING_BRACES

function_call :
        CALL IDENTIFIER OPENING_BRACKET function_arguments CLOSING_BRACKET {
            // Get the symbol from the symbol table
            int symbolIndex = getSymbolIndex($2);
            if (symbolIndex == -1)
                yyerror("Undeclared Symbol\n");

            // Return the symbol index
            $$ = symbolIndex;
        }

function_arguments :
        | return_value function_arguments2

function_arguments2 :
        | COMMA return_value function_arguments2

function_definition :
        FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN return_value TERMINATOR CLOSING_BRACES {
            int functionIndex = $2;
            symbolTable[functionIndex].isFunction = true;

            int returnResult = $9;

            if (returnResult == ERROR_UNDECLARED)
                yyerror("Symbol undeclared");
            else if (returnResult == ERROR_UNINITIALIZED)
                yyerror("Symbol uninitialized");
            
            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch");
            
            if (globalParametersCount > 0) {
                symbolTable[functionIndex].parameters = globalParameters;
                symbolTable[functionIndex].parametersCount = globalParametersCount;
                
                globalParametersCount = 0;
                globalParameters = NULL;
            }
        }
        | FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN return_value TERMINATOR CLOSING_BRACES {
            int functionIndex = $2;
            symbolTable[functionIndex].isFunction = true;

            int returnResult = $8;

            if (returnResult == ERROR_UNDECLARED)
                yyerror("Symbol undeclared");
            else if (returnResult == ERROR_UNINITIALIZED)
                yyerror("Symbol uninitialized");
            
            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch");
        }
        | FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN VOID_TYPE TERMINATOR CLOSING_BRACES {
            // Get the symbol index from the symbol name
            char * symbolName = $3;
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            symbolTable[resultIndex].isFunction = true;
            
            $$ = GLOBAL_VOID;
        }
        | FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN VOID_TYPE TERMINATOR CLOSING_BRACES {
            // Get the symbol index from the symbol name
            char * symbolName = $3;
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            symbolTable[resultIndex].isFunction = true;

            $$ = GLOBAL_VOID;
        }

function_parameters :
        | variable_or_function_declaration function_parameters2 {
            globalParameters = realloc(globalParameters, (globalParametersCount + 1) * sizeof(int));

            for (int i = globalParametersCount; i > 0; i--)
                globalParameters[i] = globalParameters[i - 1];
            
            int symbolIndex = $1;
            if (symbolTable[symbolIndex].type == TYPE_INT) 
                globalParameters[0] = PARAMETER_INT;
            else if (symbolTable[symbolIndex].type == TYPE_FLOAT) 
                globalParameters[0] = PARAMETER_FLOAT;
            else if (symbolTable[symbolIndex].type == TYPE_STRING) 
                globalParameters[0] = PARAMETER_STRING;
            else if (symbolTable[symbolIndex].type == TYPE_BOOL) 
                globalParameters[0] = PARAMETER_BOOL;
                
            globalParametersCount++;
        }

function_parameters2 :
        | COMMA variable_or_function_declaration function_parameters2 {
            globalParameters = realloc(globalParameters, (globalParametersCount + 1) * sizeof(int));

            for (int i = globalParametersCount; i > 0; i--)
                globalParameters[i] = globalParameters[i - 1];
            
            int symbolIndex = $2;
            if (symbolTable[symbolIndex].type == TYPE_INT) 
                globalParameters[0] = PARAMETER_INT;
            else if (symbolTable[symbolIndex].type == TYPE_FLOAT) 
                globalParameters[0] = PARAMETER_FLOAT;
            else if (symbolTable[symbolIndex].type == TYPE_STRING) 
                globalParameters[0] = PARAMETER_STRING;
            else if (symbolTable[symbolIndex].type == TYPE_BOOL) 
                globalParameters[0] = PARAMETER_BOOL;
                
            globalParametersCount++;
        }

enumeration :
        ENUM IDENTIFIER OPENING_BRACES IDENTIFIER enum_body CLOSING_BRACES TERMINATOR {
            // Get the symbol index from the enum name
            char * firstElement = $4;
            int resultIndex = searchAndDeclare(firstElement, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
                
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
                yyerror("Symbol already declared\n");
            if ($3 == ENUM_END)
                $$ = resultIndex;
            else
                $$ = $3;
        }

switch_case :
        SWITCH IDENTIFIER OPENING_BRACES switch_body switch_end CLOSING_BRACES
        | SWITCH IDENTIFIER OPENING_BRACES switch_end CLOSING_BRACES

switch_body :
        CASE return_value OPENING_BRACES program CLOSING_BRACES 
        | CASE return_value OPENING_BRACES CLOSING_BRACES 
        | switch_body CASE return_value OPENING_BRACES program CLOSING_BRACES 
        | switch_body CASE return_value OPENING_BRACES CLOSING_BRACES 

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
    | single_line {
        printSymbolTable();
    }

if_stmt :
        IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES program CLOSING_BRACES else_stmt {
            printf("If statement with braces\n");
        }
        | IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES CLOSING_BRACES else_stmt {
            printf("If statement with empty braces\n");
        }

else_stmt :
        | ELSE OPENING_BRACES program CLOSING_BRACES else_stmt {
            printf("Else statement with braces\n");
        }
        | ELSE OPENING_BRACES CLOSING_BRACES else_stmt {
            printf("Else statement with empty braces\n");
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
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            $$ = result;
        }
        | FLOAT_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_FLOAT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            $$ = result;
        }
        | STRING_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_STRING);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            $$ = result;
        }
        | BOOLEAN_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int result = searchAndDeclare(symbolName, TYPE_BOOL);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            $$ = result;
        }

variable_assignment :
        IDENTIFIER OP_ASSIGN expr {
            int symbolIndex = getSymbolIndex($1);
            if (symbolIndex == -1)
                yyerror("Undeclared Symbol\n");

            int assignmentStatus;
            if ($3 == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&$3, TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                yyerror("Constant reassigment\n");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch\n");
            else if (assignmentStatus == ERROR_UNKNOWN)
                yyerror("Unknown error\n");
            
            // The assignmentStatus holds the symbolIndex if any
            $$ = assignmentStatus;
        }
        | variable_or_function_declaration OP_ASSIGN expr {
            // Declare and assign a variable
            int symbolIndex = $1;

            int assignmentStatus;
            if ($3 == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&$3, TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                yyerror("Constant reassigment\n");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch\n");
            else if (assignmentStatus == ERROR_UNKNOWN)
                yyerror("Unknown error\n");
            // The assignmentStatus holds the symbolIndex if any
            $$ = assignmentStatus;
        }

expr :
        maths_expr {
            // Return the symbol index or global reference (string or number)
            $$ = $1;
        }
        | logical_expression {
            // Return the symbol index or global reference (string or number)
            $$ = $1;
        }

maths_expr : maths_expr M_OP_PLUS maths_expr %prec M_OP_PLUS {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            $$ = $1 + $3;
        }
        | maths_expr M_OP_MINUS maths_expr %prec M_OP_MINUS {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            $$ = $1 - $3;
        }
        | maths_expr M_OP_MULT maths_expr %prec M_OP_MULT {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            $$ = $1 * $3;
        }
        | maths_expr M_OP_DIV maths_expr %prec M_OP_DIV {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            $$ = $1 / $3;
        }
        | maths_expr M_OP_MOD maths_expr %prec M_OP_MOD {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");
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
                yyerror("Undeclared symbol\n");
            else if ($1 == ERROR_UNINITIALIZED)
                yyerror("Uninitialized symbol\n");
            else if ($1 == GLOBAL_STRING){
                $$ = GLOBAL_STRING;
            }
            else if ($1 == GLOBAL_NUMBER)
                $$ = globalNumber;
            else {
                int symbolIndex = (int) $1;
                if (symbolTable[symbolIndex].type == TYPE_STRING){
                    globalString = strdup(symbolTable[symbolIndex].stringValue);
                    $$ = GLOBAL_STRING;
                }
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
            else
                $$ = symbolIndex;
        }
        | STRING {
            // Return the global string indicator
            globalString = strdup($1);
            $$ = GLOBAL_STRING;
        }
        | number {
            // Return the global number indicator
            globalNumber = $1;
            $$ = GLOBAL_NUMBER;
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
            $$ = $1 && $3;
        }
        | logical_expression L_OP_OR logical_expression2 {
            $$ = $1 || $3;
        }
        | logical_expression2 {
            $$ = $1;
        }


logical_expression2 :
        L_OP_NOT logical_expression2 {
            $$ = !$2;
        }
        | L_OP_NOT return_value {
            // Parse the value in case of not being a string
            int symbolIndex = $2;
            float value;
            if (symbolIndex == GLOBAL_STRING)
                yyerror("Type mismatch\n");
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
        | L_OP_EXACT return_value {
            // Parse the value in case of not being a string
            int symbolIndex = $2;
            float value;
            if (symbolIndex == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            else if (symbolIndex == GLOBAL_NUMBER)
                value = globalNumber;
            else {
                if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                    value = symbolTable[symbolIndex].fValue;
                else
                    value = symbolTable[symbolIndex].value;
            }
            if (value == 0)
                $$ = 0;
            else
                $$ = 1;
        }
        | TRUE {
            $$ = true;
        }
        | FALSE {
            $$ = false;
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
                yyerror("Type mismatch\n");

            // Send the two incoming values for parsing and the comparator
            int result = processComparator($1, $3, EQ_OP);

            if (result == TWO_NUMBERS_COMPARISON)
                yyerror("Failed to compare two direct values\n");
            
            // Return the output of the comparison
            $$ = result;
        }
        | return_value OP_NOT_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // Send the two incoming values for parsing and the comparator
            int result = processComparator($1, $3, NEQ_OP);

            if (result == TWO_NUMBERS_COMPARISON)
                yyerror("Failed to compare two direct values\n");
            
            // Return the output of the comparison
            $$ = result;
        }
        | return_value OP_LESS return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // Send the two incoming values for parsing and the comparator
            int result = processComparator($1, $3, LS_OP);

            if (result == TWO_NUMBERS_COMPARISON)
                yyerror("Failed to compare two direct values\n");
            
            // Return the output of the comparison
            $$ = result;
        }
        | return_value OP_LESS_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // Send the two incoming values for parsing and the comparator
            int result = processComparator($1, $3, LSE_OP);

            if (result == TWO_NUMBERS_COMPARISON)
                yyerror("Failed to compare two direct values\n");
            
            // Return the output of the comparison
            $$ = result;
        }
        | return_value OP_GREATER return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // Send the two incoming values for parsing and the comparator
            int result = processComparator($1, $3, GR_OP);

            if (result == TWO_NUMBERS_COMPARISON)
                yyerror("Failed to compare two direct values\n");
            
            // Return the output of the comparison
            $$ = result;
        }
        | return_value OP_GREATER_EQUAL return_value {
            if ($1 == GLOBAL_STRING || $3 == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // Send the two incoming values for parsing and the comparator
            int result = processComparator($1, $3, GRE_OP);

            if (result == TWO_NUMBERS_COMPARISON)
                yyerror("Failed to compare two direct values\n");
            
            // Return the output of the comparison
            $$ = result;
        }

%%
  
int main(int argc, char *argv[])
{
    initSymbolTable();

    yyin = fopen(argv[1], "r");
  
    yyparse();

    fclose(yyin);

    printSymbolTable();

    return 0;
}