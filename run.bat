flex lex_file.l

bison -d yacc_file.y


gcc lex.yy.c yacc_file.tab.c -o program.exe

program.exe input_file.compilers symtbl.log quad.log
