
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
type         (int|double|char)
digit		[0-9]
id			{letter}({letter}|{digit})*
number	    {digit}+(\.{digit}+)?(E[+-]?{digit}+)?

/* 状态（或条件）定义可以定义在这里
 * INITIAL是一个默认的状态，不需要定义
 */
%s COMMENT
%s COMMENT2
%%<INITIAL>"/*"			  {BEGIN COMMENT;}
<COMMENT>"*/"			  {BEGIN INITIAL;}
<COMMENT>.|\n			  {;}
<INITIAL>"//"			  {BEGIN COMMENT2;}
<COMMENT2>\n			  {BEGIN INITIAL;}
<COMMENT2>.				  {;}
<INITIAL>{ws}	          {;}
<INITIAL>void             {return (VOID);}
<INITIAL>{type}              {return (TYPE);}
<INITIAL>while              {    return (WHILE);}
<INITIAL>for                {   return (FOR);}
<INITIAL>do		          {return (DO);}
<INITIAL>if		          {return (IF);}
<INITIAL>else		          {return (ELSE);}
<INITIAL>main             {return (MAIN);}
<INITIAL>return             {return (RETURN);}

<INITIAL>{id}	          {return (ID);}
<INITIAL>"<"	          {return (yytext);}
<INITIAL>"<="	          {return (yytext);}
<INITIAL>"="	          {return (yytext);}
<INITIAL>">"	          {return (yytext);}
<INITIAL>">="	          {return (yytext);}
<INITIAL>"=="             {return (yytext);}
<INITIAL>"!="	          {return (yytext);}
<INITIAL>"("	          {return (yytext);}
<INITIAL>")"	          {return (yytext);}
<INITIAL>"{"	          {return (yytext);}
<INITIAL>"}"	          {return (yytext);}
<INITIAL>"+"	          {return (yytext);}
<INITIAL>"-"	          {return (yytext);}
<INITIAL>"*"	          {return (yytext);}
<INITIAL>"/"	          {return (yytext);}
<INITIAL>";"	          {return (yytext);}
<INITIAL>.							{return ERRORCHAR;}



%%


int yywrap (){

  return 1;
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
	}
	if(argc>=2){
	  fclose(yyin);
	  if (argc>=3) fclose(yyout);
	}
	return 0;
}
