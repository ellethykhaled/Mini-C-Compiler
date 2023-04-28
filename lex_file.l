%{
    /* Definition section */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"

    void extern yyerror(const char*);

    int lineNumber = 0;
%}


%%

[0-9]+                              yylval=atoi(yytext); return INTEGER_NUMBER;
[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?    yylval=atof(yytext); return FLOAT_NUMBER;

[+]                                 return M_OP_PLUS;
[-]                                 return M_OP_MINUS;
[*]                                 return M_OP_MULT;
[/]                                 return M_OP_DIV;
[%]                                 return M_OP_MOD;
\^                                  return M_OP_POWER;

[Tt]rue                             return TRUE_TOKEN;
[Ff]alse                            return FALSE_TOKEN;

[!]                                 return L_OP_NOT;
[&&]                                return L_OP_AND;
[||]                                return L_OP_OR;

=                                   return OP_ASSIGN;
==                                  return OP_EQUAL;
[<]                                 return OP_LESS;
[<]=                                return OP_LESS_EQUAL;
>                                   return OP_GREATER;
>=                                  return OP_GREATER_EQUAL;

[;]                                 return TERMINATOR;

\n                                  lineNumber++; return 0;
[ \t]+                              /* Ignore whitespace */;

.                                   { ECHO; yyerror("Lexical Error"); }

%%

int yywrap(void) {
    return 1;
}

void yyerror(const char *str)
{
    fprintf(stderr, "%s\nLine: %d\n", str, lineNumber);
    
    exit(0);
}