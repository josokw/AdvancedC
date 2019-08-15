# Advanced C

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/b4b152e81db44d2e9453eb3350311701)](https://www.codacy.com/project/josokw/AdvancedC/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=josokw/AdvancedC&amp;utm_campaign=Badge_Grade_Dashboard)
[![CodeFactor](https://www.codefactor.io/repository/github/josokw/advancedc/badge/master)](https://www.codefactor.io/repository/github/josokw/advancedc/overview/master)

The code examples are used for teaching C programming at an intermediate
level.

Each example is compilable using QtCreator by opening the related *.pro*
file or the related GNU *Makefile* for gcc compiling C99.

Some unit test code examples are available: 
- Using the [Unity](http://www.throwtheswitch.org/unity/) unit test library.
Unity is written in 100% pure C code. It follows ANSI-C standards.
- Using the [Catch2](https://github.com/catchorg/Catch2) unit test library in a single header file. 
Catch2 is written in C++11.

### Debugging in Visual Studio Code: gdb

In every Makefile the compiler flag *-g* is used. Some *gdb* launches are available in *.vscode/launch.json*.
