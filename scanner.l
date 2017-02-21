%{
#include "globals.h"
%}

digit		[0-9]
number		{digit}+
letter		[a-zA-Z]
identifier	{letter}+
newline		\n
whitespace	[ \t]+

%%

"else"		{return ELSE;}
"if"		{return IF;}
"int"		{return INT;}
"return"	{return RETURN;}
"void"		{return VOID;}
"while"		{return WHILE;}
"+"		{return PLUS;}
"-"		{return MINUS;}
"*"		{return MULT;}
"/"		{return DIV;}
"<"		{return LT;}
"<="		{return LEQ;}
">"		{return GT;}
">="		{return GEQ;}
"=="		{return EQ;}
"!="		{return NEQ;}
"="		{return ASSIGN;}
";"		{return SEMI;}
","		{return COMMA;}
"("		{return LPAREN;}
")"		{return RPAREN;}
"["		{return LBRACKET;}
"]"		{return RBRACKET;}
"{"		{return LBRACE;}
"}"		{return RBRACE;}
"read"		{return READ;}
"write"		{return WRITE;}

{number}	{return NUMBER;}
{identifier}	{return ID;}
{newline}	{lineno++; return NEWLINE;}
{whitespace}	{}
.		{return ERROR;}

%%

int yywrap()
{
	printf("Done\n");
	exit(1);
	return 0;
}

void print_token(int code) {
	switch(code) {
 		case ELSE:
			printf("ELSE ");
			break;
 		case IF:
			printf("IF ");
			break;
 		case INT:
			printf("INT ");
			break;
 		case RETURN:
			printf("RETURN ");
			break;
 		case VOID:
			printf("VOID ");
			break;
 		case WHILE:
			printf("WHILE ");
			break;
 		case PLUS:
			printf("PLUS ");
			break;
 		case MINUS:
			printf("MINUS ");
			break;
 		case MULT:
			printf("MULT ");
			break;
 		case DIV:
			printf("DIV ");
			break;
 		case LT:
			printf("LT ");
			break;
 		case LEQ:
			printf("LEQ ");
			break;
 		case GT:
			printf("GT ");
			break;
 		case GEQ:
			printf("GEQ ");
			break;
 		case EQ:
			printf("EQ ");
			break;
 		case NEQ:
			printf("NEQ ");
			break;
		case SEMI:
			printf("SEMI ");
			break;
		case COMMA:
			printf("COMMA ");
			break;
		case LPAREN:
			printf("LPAREN ");
			break;
		case RPAREN:
			printf("RPAREN ");
			break;
		case LBRACKET:
			printf("LBRACKET ");
			break;
		case RBRACKET:
			printf("RBRACKET ");
			break;
		case LBRACE:
			printf("LBRACE ");
			break;
		case RBRACE:
			printf("RBRACE ");
			break;
		case READ:
			printf("READ ");
			break;
		case WRITE:
			printf("WRITE ");
			break;
		case NUMBER:
			printf("NUMBER ");
			break;
		case ID:
			printf("ID ");
			break;
		case NEWLINE:
			printf("\n");
			break;
		default:
			printf("UNKNOWN ");
			break;
	}
}


int main() 
{	
	int current_token = NEWLINE;
	while(1)
	{
		current_token = yylex();
		print_token(current_token);
		//printf(yytext);
	}
}
