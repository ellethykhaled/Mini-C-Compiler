%{
    /*Definition section */
    #include <stdio.h>

    extern void yyerror(const char *str);
    extern int yylex();
%}

%token INTEGER_NUMBER
%token FLOAT_NUMBER

%token M_OP_PLUS
%token M_OP_MINUS
%token M_OP_MULT
%token M_OP_DIV
%token M_OP_MOD
%token M_OP_POWER

%token TRUE_TOKEN
%token FALSE_TOKEN

%token L_OP_NOT
%token L_OP_AND
%token L_OP_OR

%token OP_ASSIGN
%token OP_EQUAL
%token OP_LESS
%token OP_LESS_EQUAL
%token OP_GREATER
%token OP_GREATER_EQUAL
%token TERMINATOR

%%
root : 
        expr
        {
            printf("Result = %d\n", $$);

            return 0;
        }

expr :
        maths_expr
        {
            $$ = $1;
        }
        |
        logical_expression
        {
            $$ = $1;
        }


maths_expr :
        maths_expr M_OP_PLUS maths_expr
        {
            $$ = $1 + $3;
        }
        |
        maths_expr M_OP_MINUS maths_expr
        {
            $$ = $1 - $3;
        }
        |
        maths_expr M_OP_MULT maths_expr
        {
            $$ = $1 * $3;
        }
        |
        maths_expr M_OP_DIV maths_expr
        {
            $$ = $1 / $3;
        }
        |
        maths_expr M_OP_MOD maths_expr
        {
            $$ = $1 % $3;
        }
        |
        maths_expr M_OP_POWER maths_expr
        {
            $$ = $1 ^ $3;
        }
        |
        number {
            $$ = $1;
        }

logical_expression :
        L_OP_NOT logical_expression
        {
            $$ = !$1;
        }
        |
        logical_expression L_OP_AND boolean
        {
            $$ = $1 && $3;
        }
        |
        logical_expression L_OP_OR boolean
        {
            $$ = $1 || $3;
        }
        |
        boolean
        {
            $$ = $1;
        }

boolean :
        TRUE_TOKEN
        {
            $$ = 1;
        }
        |
        FALSE_TOKEN
        {
            $$ = 0;
        }

number :
        INTEGER_NUMBER
        {
            $$ = $1;
        }
        |
        FLOAT_NUMBER
        {
            $$ = $1;
        }

%%
  
int main()
{
    yyparse();

    return 0;
}