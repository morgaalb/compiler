%{
#include "y.tab.h"
#include "globals.h"

#define LEX_KEYWORD(token) { printf("%s ", #token); return token; }
#define LEX_NEWLINE	{ printf("\n"); lineno++; }

extern int lineno;
%}

digit		[0-9]
number		{digit}+
letter		[a-zA-Z]+
identifier	{letter}+
newline		\n
whitespace	[ \t]+

%%

"else"			LEX_KEYWORD(ELSE)
"if"			LEX_KEYWORD(IF)
"int"			LEX_KEYWORD(INT)
"return"		LEX_KEYWORD(RETURN)
"void"			LEX_KEYWORD(VOID)
"while"			LEX_KEYWORD(WHILE)
"+"				LEX_KEYWORD(PLUS)
"-"				LEX_KEYWORD(MINUS)
"*"				LEX_KEYWORD(MULT)
"/"				LEX_KEYWORD(DIV)
"<"				LEX_KEYWORD(LT)
"<="			LEX_KEYWORD(LEQ)
">"				LEX_KEYWORD(GT)
">="			LEX_KEYWORD(GEQ)
"=="			LEX_KEYWORD(EQ)
"!="			LEX_KEYWORD(NEQ)
"="				LEX_KEYWORD(ASSIGN)
";"				LEX_KEYWORD(SEMICOLON)
","				LEX_KEYWORD(COMMA)
"("				LEX_KEYWORD(LPAREN)
")"				LEX_KEYWORD(RPAREN)
"["				LEX_KEYWORD(LBRACKET)
"]"				LEX_KEYWORD(RBRACKET)
"{"				LEX_KEYWORD(LBRACE)
"}"				LEX_KEYWORD(RBRACE)
	
{number}		LEX_KEYWORD(NUMBER)
{identifier}	LEX_KEYWORD(ID)
{newline}		LEX_NEWLINE
{whitespace}	{}
.				{return -1;}

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
		case SEMICOLON:
			printf("SEMICOLON ");
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
/*		case READ:
			printf("READ ");
			break;
		case WRITE:
			printf("WRITE ");
			break;*/
		case NUMBER:
			printf("NUMBER ");
			break;
		case ID:
			printf("ID ");
			break;
		default:
			printf("UNKNOWN ");
			break;
	}
}


//int main() 
//{	
//	int current_token = NEWLINE;
//	while(1)
//	{
//		current_token = yylex();
//		print_token(current_token);
		//printf(yytext);
//	}
//}
