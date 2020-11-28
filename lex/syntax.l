
/* 把注释去掉 */
%{
#include <iostream>
#include <stdio.h>
#include <string>
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
%s TYPE_DEF
%%INITIAL>"/*"			  {BEGIN COMMENT;}
<COMMENT>"*/"			  {BEGIN INITIAL;}
<COMMENT>.|\n			  {;}
<INITIAL>"//"			  {BEGIN COMMENT2;}
<COMMENT2>\n			  {BEGIN INITIAL;}
<COMMENT2>.				  {;}
<INITIAL>{ws}	          {;}
<INITIAL,TRANS_PARAS>void             {return (VOID);}
<INITIAL,TRANS_PARAS>int               {return (TYPE);}
<INITIAL>while              {BEGIN TRANS_PARAS;     return (WHILE);}
<INITIAL>for                {BEGIN TRANS_PARAS;     return (FOR);}
<INITIAL>do		          {return (DO);}
<INITIAL>if		          {BEGIN TRANS_PARAS; return (IF);}
<TRANS_PARAS>"{"            {BEGIN INITIAL;     return (IP_LSPACE);}
<TRANS_PARAS>";"            {BEGIN INITIAL;     return (IP_SEMICOLON);}
<INITIAL>else		          {return (ELSE);}
<INITIAL>main             {return (MAIN);}
<INITIAL,TRANS_PARAS>{id}	          {return (ID);}
<INITIAL,TRANS_PARAS>{number}	      {return (NUMBER);}
<INITIAL,TRANS_PARAS>"<"	          {return (LET);}
<INITIAL,TRANS_PARAS>"<="	          {return (LEET);}
<INITIAL,TRANS_PARAS>"="	          {return (ASSGIN);}
<INITIAL,TRANS_PARAS>">"	          {return (MOT);}
<INITIAL,TRANS_PARAS>">="	          {return (MOET);}
<INITIAL,TRANS_PARAS>"=="               {return (EQU);}
<INITIAL,TRANS_PARAS>"!="	          {return (NEQU);}
<INITIAL,TRANS_PARAS>"("	          {return (LP);}
<INITIAL,TRANS_PARAS>")"	          {return (RP);}
<INITIAL>"{"	          {return (LSPACE);}
<INITIAL>"}"	          {return (RSPACE);}
<INITIAL,TRANS_PARAS>"+"	          {return (ADD);}
<INITIAL,TRANS_PARAS>"-"	          {return (DEC);}
<INITIAL,TRANS_PARAS>"*"	          {return (MUL);}
<INITIAL,TRANS_PARAS>"/"	          {return (DIV);}
<INITIAL,TRANS_PARAS>";"	          {return (SEMICOLON);}
<INITIAL,TRANS_PARAS>"&&"	          {return (AND);}
<INITIAL,TRANS_PARAS>"||"	          {return (OR);}
<INITIAL,TRANS_PARAS>"%"	          {return (MOD);}
<INITIAL,TRANS_PARAS>"^"	          {return (MI);}
<INITIAL,TRANS_PARAS>","              {return (COMMA);}
<INITIAL>.							{return ERRORCHAR;}



%%


int yywrap (){

  return 1;
}

void writeout(int c){
	int* valuePtr;
  switch(c){
	case LSPACE: fprintf(yyout, "LSPACE, \"%s\"\n", yytext);
	globalPtr =globalPtr->addChild();
	break;
	case IP_LSPACE: fprintf(yyout, "IP_LSPACE, \"%s\"\n", yytext);
	break;
    case RSPACE: fprintf(yyout, "LSPACE, \"%s\"\n", yytext);
	globalPtr =globalPtr->deleteSelf();
	break;
	case IP_SEMICOLON:fprintf(yyout, "IP_LSPACE, \"%s\"\n", yytext);
	globalPtr =globalPtr->deleteSelf();
	break;
  	case ERRORCHAR: fprintf(yyout, "ERRORCHAR, \"%s\"\n", yytext);break;
    case MAIN: fprintf(yyout, "MAIN, \"%s\"\n", yytext);break;
  	case RELOP: fprintf(yyout, "RELOP, \"%s\"\n", yytext);break;
    case WHILE: fprintf(yyout, "WHILE, \"%s\"\n", yytext);
    globalPtr = globalPtr->addChild();
    break;
    case DO: fprintf(yyout, "DO, \"%s\"\n", yytext);break;
    case IF: fprintf(yyout, "IF, \"%s\"\n", yytext);
    globalPtr = globalPtr->addChild();
    break;
    case ELSE: fprintf(yyout, "ELSE, \"%s\"\n", yytext);break;
    case FOR : fprintf(yyout,"FOR,\"%s\"\n", yytext);
    globalPtr = globalPtr->addChild();
    break;
    case NUMBER: fprintf(yyout, "NUM, \"%s\"\"%d\"\n", yytext, atoi(yytext));break;
    case ID:
	valuePtr = globalPtr->addChar(string(yytext));
    if(valuePtr == nullptr){
                cout<<"Redefined"<<endl;
                break;
            }
    fprintf(yyout, "ID, \"%s\"", yytext);
	fprintf(yyout, "%ld\n", (long int)valuePtr);
	break;
    case NEWLINE: fprintf(yyout, "\n");break;
    case VOID : fprintf(yyout,"VOID,\"%s\"\n", yytext);break;
    case TYPE : fprintf(yyout,"TYPE,\"%s\"\n", yytext);break;
    case LP: fprintf(yyout,"LP,\"%s\"\n",yytext);break;
    case RP: fprintf(yyout,"RP,\"%s\"\n",yytext);break;
    case ASSGIN: fprintf(yyout,"ASSGIN,\"%s\"\n",yytext);break;
    case SEMICOLON: fprintf(yyout,"SEMICOLON,\"%s\"\n",yytext);break;
    case LET: fprintf(yyout,"LET,\"%s\"\n",yytext);break;
    case MOT: fprintf(yyout,"MOT,\"%s\"\n",yytext);break;
    case LEET: fprintf(yyout,"LEET,\"%s\"\n",yytext);break;
    case MOET: fprintf(yyout,"MOET,\"%s\"\n",yytext);break;
    case EQU: fprintf(yyout,"EQU,\"%s\"\n",yytext);break;
    case NEQU: fprintf(yyout,"NEQU,\"%s\"\n",yytext);break;
    case ADD: fprintf(yyout,"ADD,\"%s\"\n",yytext);break;
    case DEC: fprintf(yyout,"DEC,\"%s\"\n",yytext);break;
    case MUL: fprintf(yyout,"MUL,\"%s\"\n",yytext);break;
    case DIV: fprintf(yyout,"DIV,\"%s\"\n",yytext);break;
    case AND: fprintf(yyout,"AND,\"%s\"\n",yytext);break;
    case OR: fprintf(yyout,"OR,\"%s\"\n",yytext);break;
    case MOD: fprintf(yyout,"MOD,\"%s\"\n",yytext);break;
    case MI: fprintf(yyout,"MI,\"%s\"\n",yytext);break;
    case COMMA: fprintf(yyout,"COMMA,\"%s\"\n",yytext);break;

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
