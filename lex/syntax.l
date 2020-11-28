
/* 把注释去掉 */
%{
#include <iostream>
#include <stdio.h>
#include "../source/StaticFlags.h"
using namespace std;
#include "../source/TableNode.h"
auto* globalPtr = new TableNode();
// Old Chen
%}


delim		[ \t \n]
ws			{delim}+
letter	    [A-Za-z_]
digit		[0-9]
id			{letter}({letter}|{digit})*
number	    {digit}+(\.{digit}+)?(E[+-]?{digit}+)?

/* 状态（或条件）定义可以定义在这里
 * INITIAL是一个默认的状态，不需要定义
 */
%s COMMENT
%s COMMENT2
%s TRANS_PARAS
%%INITIAL>"/*"			  {BEGIN COMMENT;}
<COMMENT>"*/"			  {BEGIN INITIAL;}
<COMMENT>.|\n			  {;}
<INITIAL>"//"			  {BEGIN COMMENT2;}
<COMMENT2>\n			  {BEGIN INITIAL;}
<COMMENT2>.				  {;}
<INITIAL>{ws}	          {;}
<INITIAL>void             {return (VOID);}
<INITIAL>int               {return (TYPE);}
<INITIAL>while              {BEGIN TRANS_PARAS;     return (WHILE);}
<INITIAL>for                {BEGIN TRANS_PARAS;     return (FOR);}
<INITIAL>do		          {return (DO);}
<INITIAL>if		          {BEGIN TRANS_PARAS; return (IF);}
<TRANS_PARAS>"{"            {BEGIN INITIAL;     return (IP_LSPACE);}
<TRANS_PARAS>";"            {BEGIN INITIAL;     return (IP_SEMICOLON);}
<INITIAL>else		          {return (ELSE);}
<INITIAL>main             {return (MAIN);}
<INITIAL>{id}	          {return (ID);}
<INITIAL>{number}	      {return (NUMBER);}
<INITIAL>"<"	          {return (LET);}
<INITIAL>"<="	          {return (LEET);}
<INITIAL>"="	          {return (ASSGIN);}
<INITIAL>">"	          {return (MOT);}
<INITIAL>">="	          {return (MOET);}
<INITIAL>"=="               {return (EQU);}
<INITIAL>"!="	          {return (NEQU);}
<INITIAL>"("	          {return (LP);}
<INITIAL>")"	          {return (RP);}
<INITIAL>"{"	          {return (LSPACE);}
<INITIAL>"}"	          {return (RSPACE);}
<INITIAL>"+"	          {return (ADD);}
<INITIAL>"-"	          {return (DEC);}
<INITIAL>"*"	          {return (MUL);}
<INITIAL>"/"	          {return (DIV);}
<INITIAL>";"	          {return (SEMICOLON);}
<INITIAL>"&"	          {return (AND);}
<INITIAL>"||"	          {return (OR);}
<INITIAL>"%"	          {return (MOD);}
<INITIAL>"^"	          {return (MI);}
<INITIAL>.							{return ERRORCHAR;}



%%


int yywrap (){

  return 1;
}

void writeout(int c){
	int* valuePtr;
  switch(c){
	case LSPACE: fprintf(yyout, "(LSPACE, \"%s\") ", yytext);
	globalPtr =globalPtr->addChild();
	break;
	case IP_LSPACE: fprintf(yyout, "(IP_LSPACE, \"%s\")", yytext);
	break;
    case RSPACE: fprintf(yyout, "(LSPACE, \"%s\") ", yytext);
	globalPtr =globalPtr->deleteSelf();
	break;
	case IP_SEMICOLON:fprintf(yyout, "(IP_LSPACE, \"%s\")", yytext);
	globalPtr =globalPtr->deleteSelf();
	break;
  	case ERRORCHAR: fprintf(yyout, "(ERRORCHAR, \"%s\") ", yytext);break;
    case MAIN: fprintf(yyout, "(MAIN, \"%s\") ", yytext);break;
  	case RELOP: fprintf(yyout, "(RELOP, \"%s\") ", yytext);break;
    case WHILE: fprintf(yyout, "(WHILE, \"%s\") ", yytext);
    globalPtr = globalPtr->addChild();
    break;
    case DO: fprintf(yyout, "(DO, \"%s\") ", yytext);break;
    case IF: fprintf(yyout, "(IF, \"%s\") ", yytext);
    globalPtr = globalPtr->addChild();
    break;
    case ELSE: fprintf(yyout, "(ELSE, \"%s\") ", yytext);break;
    case FOR : fprintf(yyout,"(for,\"%s\"\n)", yytext);
    globalPtr = globalPtr->addChild();
    break;
    case NUMBER: fprintf(yyout, "(NUM, \"%s\") ", yytext);break;
    case ID:
	valuePtr = globalPtr->addChar(string(yytext));
    if(valuePtr == nullptr){
                cout<<"Redefined"<<endl;
                break;
            }
    fprintf(yyout, "(ID, \"%s\") ", yytext);
	fprintf(yyout, "%ld\n", valuePtr);
	break;
    case NEWLINE: fprintf(yyout, "\n");break;
    case VOID : fprintf(yyout,"(VOID,\"%s\")", yytext);break;
    case TYPE : fprintf(yyout,"(TYPE,\"%s\")", yytext);break;
    case LP: fprintf(yyout,"(LP,\"%s\")",yytext);break;
    case RP: fprintf(yyout,"(RP,\"%s\")",yytext);break;
    case ASSGIN: fprintf(yyout,"(ASSGIN,\"%s\")",yytext);break;
    case SEMICOLON: fprintf(yyout,"(SEMICOLON,\"%s\")",yytext);break;
    case LET: fprintf(yyout,"(LET,\"%s\")",yytext);break;
    case MOT: fprintf(yyout,"(MOT,\"%s\")",yytext);break;
    case LEET: fprintf(yyout,"(LEET,\"%s\")",yytext);break;
    case MOET: fprintf(yyout,"(MOET,\"%s\")",yytext);break;
    case EQU: fprintf(yyout,"(EQU,\"%s\")",yytext);break;
    case NEQU: fprintf(yyout,"(NEQU,\"%s\")",yytext);break;
    case ADD: fprintf(yyout,"(ADD,\"%s\")",yytext);break;
    case DEC: fprintf(yyout,"(DEC,\"%s\")",yytext);break;
    case MUL: fprintf(yyout,"(MUL,\"%s\")",yytext);break;
    case DIV: fprintf(yyout,"(DIV,\"%s\")",yytext);break;
    case AND: fprintf(yyout,"(AND,\"%s\")",yytext);break;
    case OR: fprintf(yyout,"(OR,\"%s\")",yytext);break;
    case MOD: fprintf(yyout,"(MOD,\"%s\")",yytext);break;
     case MI: fprintf(yyout,"(MI,\"%s\")",yytext);break;
    default:break;
  }
  return;
}


int main (int argc, char ** argv){
	int c,j=0;
	if (argc>=2){
	  if ((yyin = fopen(argv[1], "r")) == NULL){
	    printf("Can't open file %s\n", argv[1]);
	    return 1;
	  }
	  if (argc>=3){
	    yyout=fopen(argv[2], "w");
	  }
	}

	while (c = yylex()){
		writeout(c);
		j++;
		if (j%5 == 0) writeout(NEWLINE);
	}
	if(argc>=2){
	  fclose(yyin);
	  if (argc>=3) fclose(yyout);
	}
	return 0;
}
