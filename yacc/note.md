* Yacc Branch
```shell
yacc grammer.y
gcc y.tab.c
./a.out
```

```
cd yacc
bison -o y.tab.c compiler.y
bison -o y.tab.h compiler.y -d
g++ -std=c++11 -o compiler tree.cpp lex.yy.c y.tab.c
./compiler test.c
```