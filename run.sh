lex lex_file.l

yacc -d yacc_file.y

# Files renamed to make consistency between docker container script (run.sh) and windows bash script (run.bash)
mv y.tab.c yacc_file.tab.c
mv y.tab.h yacc_file.tab.h

cc lex.yy.c yacc_file.tab.c -o program.exe

./program.exe ./input_file.compilers ./symtbl.log ./quad.log
