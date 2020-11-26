//
// Created by zpt1813061 on 2020/11/19.
//

#ifndef LEXICALANALYSIS1_0_STATICFLAGS_H
#define LEXICALANALYSIS1_0_STATICFLAGS_H

enum {
    LT,
    GT,
    EQ,
    LE,
    NE,
    GE,
    LLK,
    RLK,
    LBK,
    RBK,
    IF,
    ELSE,
    EQU,
    SEM,

    WHILE,
    DO,
    ID,
    NUMBER,
    RELOP,

    NEWLINE,
    ERRORCHAR,
    ADD,
    DEC,
    MUL,
    DIV,

    FOR,
    TYPE,
    VOID,
    LP,
    MAIN,
    RP,
    LSPACE,
    RSPACE,
    RBRACE,



    // Type check
    TYPE_NOT_MATCH,
    TYPE_NOT_SUPPORT,
    TYPE_MATCH,
};
enum TYPE_ENUM{
    // Type const
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_FLOAT,
    TYPE_STRING,
};
#endif //LEXICALANALYSIS1_0_STATICFLAGS_H
