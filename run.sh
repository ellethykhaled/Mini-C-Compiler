lex lex_file.l

yacc -d yacc_file.y

cc lex.yy.c y.tab.c -o program.exe

./program.exe ./input_file.compilers
