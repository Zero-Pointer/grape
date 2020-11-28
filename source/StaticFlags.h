//
// Created by zpt1813061 on 2020/11/19.
//

#ifndef LEXICALANALYSIS1_0_STATICFLAGS_H
#define LEXICALANALYSIS1_0_STATICFLAGS_H

enum {
    ASSIGN,
    IF,
    ELSE,

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
    SEMICOLON,



    //bool < > <= >= == !=
    LET,
    MOT,
    LEET,
    MOET,
    EQU,
    NEQU,


    // Type check
    TYPE_NOT_MATCH,
    TYPE_NOT_SUPPORT,
    TYPE_MATCH,

    //Trans parameter state
    IP_LSPACE,
    IP_SEMICOLON,
};
enum TYPE_ENUM{
    // Type const
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_FLOAT,
    TYPE_STRING,
};
#endif //LEXICALANALYSIS1_0_STATICFLAGS_H
