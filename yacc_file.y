%{
    /*Definition section */
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

%token L_OP_NOT L_OP_AND L_OP_OR
%token OP_ASSIGN OP_EQUAL OP_NOT_EQUAL OP_LESS OP_LESS_EQUAL OP_GREATER OP_GREATER_EQUAL

%token TERMINATOR CLOSING_BRACKET OPENING_BLOCK_BRACES OPENING_BRACKET CLOSING_BRACES OPENING_BRACES

%token FOR WHILE REPEAT

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

%type <fValue> expr maths_expr number return_value logical_expression logical_expression2 comparison_expression
%type <sIndex> variable_or_function_declaration

%%

program :
        sub_program
        |
        program sub_program
        ;

sub_program : 
        single_line TERMINATOR
        | if_stmt
        | for_loop
        | while_loop { printf("While loop\n"); }
        | do_while { printf("Repeat-until/Do-while loop\n"); }
        | switch_case { printf("Switch case\n"); }
        | enumumeration
        | function_definition
        | block_structure { printf("Block structure\n"); }

block_structure :
        OPENING_BLOCK_BRACES program CLOSING_BRACES
        | OPENING_BLOCK_BRACES CLOSING_BRACES

function_call :
        CALL IDENTIFIER OPENING_BRACKET function_arguments CLOSING_BRACKET

function_arguments :
        | return_value function_arguments2

function_arguments2 :
        | COMMA return_value function_arguments2

function_definition :
        FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES {
            // $2->isFunction = true;
            // $2->scopeLevel = scopeLevel;
            // printf("Function %s of type %s defined\n", $2->name, $2->type);
        }
        | FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES {
            // symbolTable[symbolCount].isFunction = true;
            // symbolTable[symbolCount].scopeLevel = scopeLevel;
            // printf("Here\n");
            // printf("Function %s of type %s defined\n", symbolTable[symbolCount].name, symbolTable[symbolCount].type);
        }
        | FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES {
            // $3->type = TYPE_VOID;
            // $3->isFunction = true;
            // $3->scopeLevel = scopeLevel;
            // printf("Function %s of type %s defined\n", $3->name, $3->type);
        }
        | FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES {
            // $3->type = TYPE_VOID;
            // $3->isFunction = true;
            // $3->scopeLevel = scopeLevel;
            // printf("Function %s of type %s defined\n", $3->name, $3->type);
        }

function_parameters :
        | return_value function_parameters2

function_parameters2 :
        | COMMA return_value function_parameters2

enumumeration :
        ENUM IDENTIFIER OPENING_BRACES IDENTIFIER enum_body CLOSING_BRACES TERMINATOR {
            printf("Enum\n");
        }

enum_body :
        | COMMA IDENTIFIER enum_body

switch_case :
        SWITCH IDENTIFIER OPENING_BRACES switch_body switch_end CLOSING_BRACES
        | SWITCH IDENTIFIER OPENING_BRACES switch_end CLOSING_BRACES

switch_body :
        CASE return_value sub_program 
        | CASE return_value OPENING_BRACES program CLOSING_BRACES 
        | CASE return_value OPENING_BRACES CLOSING_BRACES 
        | switch_body CASE return_value sub_program 
        | switch_body CASE return_value OPENING_BRACES program CLOSING_BRACES 
        | switch_body CASE return_value OPENING_BRACES CLOSING_BRACES 

switch_end :
        DEFAULT sub_program
        | DEFAULT OPENING_BRACES program CLOSING_BRACES
        | DEFAULT OPENING_BRACES CLOSING_BRACES

single_line : 
        expr
        | constant_variable_declaration
        | variable_or_function_declaration
        | variable_assignment

while_loop :
        WHILE OPENING_BRACKET single_line CLOSING_BRACKET sub_program
        | WHILE OPENING_BRACKET single_line CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES
        | WHILE OPENING_BRACKET single_line CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES
do_while :
        REPEAT OPENING_BRACES program CLOSING_BRACES WHILE single_line
        | REPEAT OPENING_BRACES CLOSING_BRACES WHILE single_line
        | REPEAT sub_program WHILE single_line

for_loop :
        FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET sub_program {
            printf("For loop with single child\n");
        }
        | FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES {
            printf("For loop with braces\n");
        }
        | FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES {
            printf("For loop with empty braces\n");
        }

line_or_null :
    | single_line

if_stmt :
        IF OPENING_BRACKET single_line CLOSING_BRACKET THEN sub_program {
            printf("If statement with single child\n");
        }
        | IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES program CLOSING_BRACES else_stmt {
            printf("If statement with braces\n");
        }
        | IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES CLOSING_BRACES else_stmt {
            printf("If statement with empty braces\n");
        }

else_stmt :
        | ELSE sub_program {     
            printf("Else statement with single child\n");
        }
        | ELSE OPENING_BRACES program CLOSING_BRACES else_stmt {
            printf("Else statement with braces\n");
        }
        | ELSE OPENING_BRACES CLOSING_BRACES else_stmt {
            printf("Else statement with empty braces\n");
        }

constant_variable_declaration :
        CONSTANT variable_assignment {
            printf("Declared constant variable\n");  
        }

variable_or_function_declaration :
        INT_TYPE IDENTIFIER {
            // Get the symbol index from the symbol name
            char * symbolName = $2;
            int symbolIndex = getSymbolIndex(symbolName);
            
            // Declare a new symbol in case of no symbol found or we are in a sub scope
            if (symbolIndex == -1 || symbolTable[symbolIndex].scopeLevel < scopeLevel) {
                $$ = declareNewSymbol(symbolName, TYPE_INT);
            }
            else {
                yyerror("Symbol already declared");
            }
        }
        | FLOAT_TYPE IDENTIFIER {
            printf("Here Int %s", $2);
            // printf("Here Float");
            // $2->type = TYPE_FLOAT;
        }
        | STRING_TYPE IDENTIFIER {
            // $2->type = TYPE_STRING;
        }
        | BOOLEAN_TYPE IDENTIFIER {
            // $2->type = TYPE_BOOL;
        }

variable_assignment :
        IDENTIFIER OP_ASSIGN expr {
            printf("Assigned expression to variable\n");
        }
        | variable_or_function_declaration OP_ASSIGN expr {
            printf("Declared variable and assigned expression to it\n");
        }

expr :
        maths_expr {
            // printf("Mathematical Expression = %d\n", $$);
        }
        | logical_expression {
            // printf("Logical Expression = %d\n", $$);
        }

maths_expr : maths_expr M_OP_PLUS maths_expr %prec M_OP_PLUS {
            $$ = $1 + $3;
        }
        | maths_expr M_OP_MINUS maths_expr %prec M_OP_MINUS {
            $$ = $1 - $3;
        }
        | maths_expr M_OP_MULT maths_expr %prec M_OP_MULT {
            $$ = $1 * $3;
        }
        | maths_expr M_OP_DIV maths_expr %prec M_OP_DIV {
            $$ = $1 / $3;
        }
        | maths_expr M_OP_MOD maths_expr %prec M_OP_MOD {
            $$ = (int) $1 % (int) $3;
        }
        | maths_expr M_OP_POWER maths_expr %prec M_OP_POWER {
            int answer = 1;
            for (int i = 0; i < $3; i++)
                answer *= $1;
            $$ = answer;
        }
        | return_value {
            $$ = $1;
        }
        | OPENING_BRACKET maths_expr CLOSING_BRACKET {
            $$ = $2;
        }

return_value :
        IDENTIFIER {
            $$ = 1;
            }
        | number {
            $$ = 1;
        }
        | STRING {
            $$ = 1;
        }
        | function_call {
            printf("Function call\n");
            $$ = 1;
            /* Dummy return */
        }

number :
        INTEGER_NUMBER {
            $$ = (int) $1;
        }
        | FLOAT_NUMBER {
            $$ = $1;
        }

logical_expression :
        L_OP_NOT logical_expression2 {
            $$ = !$2;
        }
        | logical_expression L_OP_AND logical_expression2 {
            $$ = $1 && $3;
        }
        | logical_expression L_OP_OR logical_expression2 {
            $$ = $1 || $3;
        }
        | logical_expression2 {
            $$ = $1;
        }


logical_expression2 :
        TRUE {
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
            /* Dummy return */
            $$ = true;
        }
        | return_value OP_NOT_EQUAL return_value {
            /* Dummy return */
            $$ = true;
        }
        | return_value OP_LESS return_value {
            /* Dummy return */
            $$ = true;
        }
        | return_value OP_LESS_EQUAL return_value {
            /* Dummy return */
            $$ = true;
        }
        | return_value OP_GREATER return_value {
            /* Dummy return */
            $$ = true;
        }
        | return_value OP_GREATER_EQUAL return_value {
            /* Dummy return */
            $$ = true;
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