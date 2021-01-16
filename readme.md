# Grape - C Complier

一个简单的C语言编译器

- 项目介绍：这是一个编译原理大作业
- 团队成员：陈钰鼎、柳鑫、孟程昊、秦寅畅、祝鹏天
- 完成时间：2020.12.28

分工情况

- 词法分析: 陈钰鼎、孟程昊
- 语法分析: 柳鑫、秦寅畅
- 类型检查: 祝鹏天
- 代码优化: 柳鑫
- 错误分析: 柳鑫
- 汇编程序: 祝鹏天
- 符号表: 祝鹏天

加分项

- 支持函数调用
- 支持数组运算（一维数组、二维数组）

## 运行

环境要求：flex bison g++11 python3 jdk-14

工具：Mars（汇编器）

#### 中间代码生成
运行 middleCode_show 文件夹下的 order.sh
```
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
```

#### 目标代码生成
运行 mips 文件夹下的 order.sh
```
cp ../test/middleCode.txt inter.txt
python3 objectcode.py
java -jar Mars4_5.jar
```

生成的目标代码在 result.asm 中

在 Mars 中运行 result.asm 文件

## 中间代码格式
| 语法  | 描述 |
| :---: | :---- |
| x := y | 赋值操作，将变量 y 赋值给 x | 
| x := &y |  取地址操作，将 y 的地址赋值给 x | 
| x := *y | 取以 y 值为地址的内存单元的内容赋给 x | 
| *x := y | 将 y 值赋给以 x 值为地址的内存单元 | 
| LABEL label1 : | 定义标签 label1  |
| GOTO label1| 无条件跳转至 lable1 | 
| IF x [relop] y GOTO z | 如果 x 与 y 满足[relop]关系则跳转至标号 z | 
| x := y [op] z | 将变量 y 和 z 进行 op 运算的结果传递给 x | 
| x := #10 | 将立即数 10 的值传递给变量 x | 
| FUNCTION f :  | 定义函数 f  | 
| RETURN x | 退出当前函数并返回 x 值 | 
| DEC x [size] | 内存空间申请，大小为[size] | 
| ARG x | 为函数传入实参 x | 
| x := CALL f | 调用函数 f，并将其返回值赋给 x | 
| CALL f | 调用函数 f | 
| PARAM x | 函数形参声明 | 

## 项目架构
[Alt text](./source/p1.png)
