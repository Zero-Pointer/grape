flex ../lex/syntax3.l
echo "Flex Over"
bison -o y.tab.c ../yacc/compiler3.y
echo "y.tab.c Over"
bison -o y.tab.h ../yacc/compiler3.y -d
echo "y.tab.h Over"
g++ -std=c++11 -o compiler ../source/tree.cpp ../source/TableNode.cpp lex.yy.c y.tab.c
echo "compiler Over"
./compiler test.c

echo
cat output.txt