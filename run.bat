@echo off

rem Compile the lexer
flex lex_file.l

rem Compile the parser
bison -d yacc_file.y

rem Compile the program
gcc lex.yy.c yacc_file.tab.c -o program.exe
