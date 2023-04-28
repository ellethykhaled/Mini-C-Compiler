%{
    /*Definition section */
    #include <stdio.h>
    #include <stdbool.h>
    #include <string.h>
    extern void yyerror(const char *str);
    extern int yylex();
%}

%token INT_TYPE FLOAT_TYPE STRING_TYPE BOOLEAN_TYPE

%token IDENTIFIER

%token STRING
%token INTEGER_NUMBER FLOAT_NUMBER
%token TRUE FALSE

%token M_OP_PLUS M_OP_MINUS M_OP_MULT M_OP_DIV M_OP_MOD M_OP_POWER
%left M_OP_PLUS M_OP_MINUS
%left M_OP_MULT M_OP_DIV M_OP_MOD
%right M_OP_POWER

%token L_OP_NOT L_OP_AND L_OP_OR
%token OP_ASSIGN OP_EQUAL OP_LESS OP_LESS_EQUAL OP_GREATER OP_GREATER_EQUAL

%token TERMINATOR CLOSING_BRACKET OPENING_BRACKET CLOSING_BRACES OPENING_BRACES

%%
root : 
        expr {
            printf("Result = %d\n", $$);

            return 0;
        }

expr :
        maths_expr {
            $$ = $1;
        }
        | logical_expression {
            $$ = $1;
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
            | number {
                $$ = $1;
            }
            | OPENING_BRACKET maths_expr CLOSING_BRACKET
            ;


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
        | logical_expression2

logical_expression2 :
        TRUE {
            $$ = true;
        }
        | FALSE {
            $$ = false;
        }
        | OPENING_BRACKET logical_expression CLOSING_BRACES

%%
  
int main()
{
    yyparse();

    return 0;
}