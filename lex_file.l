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

[Ii]nt                              return INT_TYPE;
[Ff]loat                            return FLOAT_TYPE;
[Ss]tr(ing)?                        return STRING_TYPE;

[_a-zA-Z][_a-zA-Z0-9]*              return IDENTIFIER;

[\"][_a-zA-Z0-9]*[\"]               return STRING;

[0-9]+                              yylval=atoi(yytext); return INTEGER_NUMBER;
[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?    yylval=atof(yytext); return FLOAT_NUMBER;

[+]                                 return M_OP_PLUS;
[-]                                 return M_OP_MINUS;
[*]                                 return M_OP_MULT;
[/]                                 return M_OP_DIV;
[%]                                 return M_OP_MOD;
\^                                  return M_OP_POWER;

[Tt]rue                             yylval=atoi("1"); return TRUE_TOKEN;
[Ff]alse                            yylval=atoi("0"); return FALSE_TOKEN;

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

\(                                  return CLOSING_BRACKET;
\)                                  return OPENING_BRACKET;

\{                                  return CLOSING_BRACES;
\}                                  return OPENING_BRACES;

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