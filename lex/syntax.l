
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
letter	[A-Za-z_]
digit		[0-9]
id			{letter}({letter}|{digit})*
number	{digit}+(\.{digit}+)?(E[+-]?{digit}+)?

/* 状态（或条件）定义可以定义在这里
 * INITIAL是一个默认的状态，不需要定义
 */
%s COMMENT
%s COMMENT2
%%

<INITIAL>"/*"						{BEGIN COMMENT;}
<COMMENT>"*/"						{BEGIN INITIAL;}
<COMMENT>.|\n						{;}
<INITIAL>"//"						{BEGIN COMMENT2;}
<COMMENT2>\n					{BEGIN INITIAL;}
<COMMENT2>.					{;}

 /* ECHO是一个宏，相当于 fprintf(yyout, "%s", yytext)*/

<INITIAL>{ws}	          {;}
<INITIAL>void             {return (VOID);}
<INITIAL>while					{return (WHILE);}
<INITIAL>int               {return (TYPE);}
<INITIAL>for                    {return (FOR);}
<INITIAL>do		          {return (DO);}
<INITIAL>if		          {return (IF);}
<INITIAL>else		          {return (ELSE);}
<INITIAL>main             {return (MAIN);}
<INITIAL>{id}	          {return (ID);}
<INITIAL>{number}	      {return (NUMBER);}
<INITIAL>"<"	          {return (RELOP);}
<INITIAL>"<="	          {return (RELOP);}
<INITIAL>"="	          {return (RELOP);}
<INITIAL>"!="	          {return (RELOP);}
<INITIAL>">"	          {return (RELOP);}
<INITIAL>">="	          {return (RELOP);}
<INITIAL>"("	          {return (LP);}
<INITIAL>")"	          {return (RP);}
<INITIAL>"{"	          {return (LSPACE);}
<INITIAL>"}"	          {return (RSPACE);}
<INITIAL>"+"	          {return (RELOP);}
<INITIAL>"-"	          {return (RELOP);}
<INITIAL>"*"	          {return (RELOP);}
<INITIAL>"/"	          {return (RELOP);}
<INITIAL>";"	          {return (RBRACE);}

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
    case RSPACE: fprintf(yyout, "(LSPACE, \"%s\") ", yytext);
	globalPtr =globalPtr->deleteSelf();
	break;
  	case ERRORCHAR: fprintf(yyout, "(ERRORCHAR, \"%s\") ", yytext);break;
    case MAIN: fprintf(yyout, "(MAIN, \"%s\") ", yytext);break;
  	case RELOP: fprintf(yyout, "(RELOP, \"%s\") ", yytext);break;
    case WHILE: fprintf(yyout, "(WHILE, \"%s\") ", yytext);break;
    case DO: fprintf(yyout, "(DO, \"%s\") ", yytext);break;
    case IF: fprintf(yyout, "(IF, \"%s\") ", yytext);break;
   case ELSE: fprintf(yyout, "(ELSE, \"%s\") ", yytext);break;
    case NUMBER: fprintf(yyout, "(NUM, \"%s\",\"%s\") ", yytext);break;
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
    case FOR : fprintf(yyout,"(for,\"%s\"\n)", yytext);break;

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
