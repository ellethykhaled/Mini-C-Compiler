# Mini-C Compiler

Welcome to the Mini-C Compiler repository! This is the project of the [Languages and Compilers] academic course CMPN403 at Cairo University - Faculty of Engineering - Credit Hours System - Communication and Computer Engineering Program
The project implements a compiler for a simple programming language called Mini-C. The compiler takes Mini-C source code as input and generates its equivalent symbol table and quadruples used for generating low-level assembly code.

## Features

- Lexical analysis using Lex: The source code is processed by a lexical analyzer implemented using Lex, which tokenizes the input and generates tokens for further parsing.

- Syntax parsing using Yacc: The tokenized input is parsed using Yacc, which applies a set of production rules to generate a parse tree and produce the output quadruples.

- Symbol table generation: The compiler generates a symbol table that stores information about variables and functions in the Mini-C program.

- Quadruples generation: The compiler generates quadruples, which are intermediate representations of the program's operations. These quadruples can be used to generate low-level assembly code.

- Error handling: The compiler includes proper error handling mechanisms to catch syntax errors and report them to the user.

## Contributors
1. [Ahmed Hussein](https://github.com/Ahmedh12)
2. [Khaled El-Lethy](https://github.com/ellethykhaled)
3. [Sandra Hany](https://github.com/SandraHany)
4. [Mustafa Usama](https://github.com/Mustafausamaa)
