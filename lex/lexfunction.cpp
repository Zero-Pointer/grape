////
//// Created by cyd on 2020/11/24.
////
//
//#include "lexfunction.h";
//{
//int* valuePtr;
//switch(c){
//case LSPACE: fprintf(yyout, "(LSPACE, \"%s\") ", yytext);
//globalPtr =globalPtr->addChild();
//break;
//case RSPACE: fprintf(yyout, "(LSPACE, \"%s\") ", yytext);
//globalPtr =globalPtr->deleteSelf();
//break;
//case ERRORCHAR: fprintf(yyout, "(ERRORCHAR, \"%s\") ", yytext);break;
//case MAIN: fprintf(yyout, "(MAIN, \"%s\") ", yytext);break;
//case RELOP: fprintf(yyout, "(RELOP, \"%s\") ", yytext);break;
//case WHILE: fprintf(yyout, "(WHILE, \"%s\") ", yytext);break;
//case DO: fprintf(yyout, "(DO, \"%s\") ", yytext);break;
//case IF: fprintf(yyout, "(IF, \"%s\") ", yytext);break;
//case ELSE: fprintf(yyout, "(ELSE, \"%s\") ", yytext);break;
//case NUMBER: fprintf(yyout, "(NUM, \"%s\",\"%s\") ", yytext);break;
//case ID:
//valuePtr = globalPtr->addChar(string(yytext));
//if(valuePtr == nullptr){
//cout<<"Redefined"<<endl;
//break;
//}
//fprintf(yyout, "(ID, \"%s\") ", yytext);
//fprintf(yyout, "%ld\n", valuePtr);
//break;
//case NEWLINE: fprintf(yyout, "\n");break;
//case VOID : fprintf(yyout,"(VOID,\"%s\")", yytext);break;
//case TYPE : fprintf(yyout,"(TYPE,\"%s\")", yytext);break;
//case FOR : fprintf(yyout,"(for,\"%s\"\n)", yytext);break;
//
//default:break;
//}
//return;
//}