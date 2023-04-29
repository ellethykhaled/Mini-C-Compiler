%{
    /*Definition section */
    #include <stdio.h>
    #include <stdbool.h>
    #include <string.h>
    #include <unistd.h>
    
    extern void yyerror(const char *str);
    extern int yylex();
    
    extern FILE *yyin;
%}

%token INT_TYPE FLOAT_TYPE STRING_TYPE BOOLEAN_TYPE

%token CONSTANT IDENTIFIER

%token STRING
%token INTEGER_NUMBER FLOAT_NUMBER
%token BOOLEAN TRUE FALSE

%token M_OP_PLUS M_OP_MINUS M_OP_MULT M_OP_DIV M_OP_MOD M_OP_POWER
%left M_OP_PLUS M_OP_MINUS
%left M_OP_MULT M_OP_DIV M_OP_MOD
%right M_OP_POWER

%token L_OP_NOT L_OP_AND L_OP_OR
%token OP_ASSIGN OP_EQUAL OP_NOT_EQUAL OP_LESS OP_LESS_EQUAL OP_GREATER OP_GREATER_EQUAL

%token TERMINATOR CLOSING_BRACKET OPENING_BRACKET CLOSING_BRACES OPENING_BRACES

%token FOR WHILE REPEAT UNTIL

%token IF THEN ELSE

%token SWITCH CASE DEFAULT

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
        | switch_case { printf("Switch Case\n"); }

switch_case :
        SWITCH IDENTIFIER OPENING_BRACES switch_body switch_end CLOSING_BRACES
        | SWITCH IDENTIFIER OPENING_BRACES switch_end CLOSING_BRACES

switch_body :
        CASE identifier_or_number sub_program 
        | CASE identifier_or_number OPENING_BRACES program CLOSING_BRACES 
        | switch_body CASE identifier_or_number sub_program 
        | switch_body CASE identifier_or_number OPENING_BRACES program CLOSING_BRACES 

switch_end :
        DEFAULT sub_program
        | DEFAULT OPENING_BRACES program CLOSING_BRACES

single_line : 
        expr
        | constant_variable_declaration
        | variable_declaration
        | variable_assignment

while_loop :
        WHILE OPENING_BRACKET single_line CLOSING_BRACKET sub_program
        | WHILE OPENING_BRACKET single_line CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES
do_while :
        REPEAT OPENING_BRACES program CLOSING_BRACES WHILE single_line
        | REPEAT sub_program WHILE single_line

for_loop :
        FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET sub_program {
            printf("For loop with single child\n");
        }
        | FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES {
            printf("For loop with braces\n");
        }

line_or_null :
    | single_line

if_stmt :
        IF OPENING_BRACKET single_line CLOSING_BRACKET THEN sub_program {
            printf("If statement with single child\n");
        }
        | 
        IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES program CLOSING_BRACES else_stmt {
            printf("If statement with braces\n");
        }

else_stmt :
        | ELSE sub_program {     
            printf("Else statement with single child\n");
        }
        | ELSE OPENING_BRACES program CLOSING_BRACES else_stmt {
            printf("Else statement with braces\n");
        }

variable_declaration :
        INT_TYPE IDENTIFIER {
            printf("Int declared\n");
        }
        | FLOAT_TYPE IDENTIFIER {
            printf("Float declared\n");
        }
        | STRING_TYPE IDENTIFIER {
            printf("String declared\n");
        }
        | BOOLEAN_TYPE IDENTIFIER {
            printf("Boolean declared\n");
        }

constant_variable_declaration :
        CONSTANT variable_assignment {
            printf("Declared constant variable\n");  
        }

variable_assignment :
        IDENTIFIER OP_ASSIGN expr {
            printf("Assigned expression to variable\n");
        }
        | IDENTIFIER OP_ASSIGN STRING {
            printf("Assigned string to variable\n");
        }
        | variable_declaration OP_ASSIGN expr {
            printf("Declared variable and assigned expression to it\n");
        }
        | variable_declaration OP_ASSIGN STRING {
            printf("Declared variable and assigned string to it\n");
        }

expr :
        maths_expr {
            printf("Mathematical Expression = %d\n", $$);
        }
        | logical_expression {
            printf("Logical Expression = %d\n", $$);
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
                $$ = $1 % $3;
            }
            | maths_expr M_OP_POWER maths_expr %prec M_OP_POWER {
                int answer = 1;
                for (int i = 0; i < $3; i++)
                    answer *= $1;
                $$ = answer;
            }
            | identifier_or_number {
                $$ = $1;
            }
            | OPENING_BRACKET maths_expr CLOSING_BRACKET {
                $$ = $2;
            }

identifier_or_number:
            IDENTIFIER {
                $$ = $1;
            }
            | number {
                $$ = $1;
            }

number :
        INTEGER_NUMBER {
            $$ = $1;
        }
        | FLOAT_NUMBER {
            $$ = $1;
        }

logical_expression :
        L_OP_NOT logical_expression2 {
            $$ = !$1;
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
        identifier_or_number OP_EQUAL identifier_or_number {
            $$ = true;
        }
        | identifier_or_number OP_NOT_EQUAL identifier_or_number {
            $$ = true;
        }
        | identifier_or_number OP_LESS identifier_or_number {
            $$ = true;
        }
        | identifier_or_number OP_LESS_EQUAL identifier_or_number {
            $$ = true;
        }
        | identifier_or_number OP_GREATER identifier_or_number {
            $$ = true;
        }
        | identifier_or_number OP_GREATER_EQUAL identifier_or_number {
            $$ = true;
        }

%%
  
int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
  
    yyparse();

    fclose(yyin);

    return 0;
}