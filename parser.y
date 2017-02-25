%{
#include <stdio.h>
extern int lineno;

%}


%token INTEGER
%token ID
%token SEMICOLON
%token LBRACKET
%token RBRACKET
%token NUMBER
%token INT
%token VOID
%token LPAREN
%token RPAREN
%token COMMA
%token LBRACE
%token RBRACE
%token IF
%token ELSE
%token WHILE
%token RETURN
%token ASSIGN
%token LEQ
%token LT
%token GT
%token GEQ
%token EQ
%token NEQ
%token PLUS
%token MINUS
%token MULT
%token DIV
%token NUM

%%


program:
	declaration_list
		{}
	;

declaration_list:
	declaration_list declaration
		{}
	| declaration
		{}
	;

declaration:
	var_declaration
		{}
	| fun_declaration
		{}
	;

var_declaration:
	type_specifier ID SEMICOLON
		{}
	| type_specifier ID LBRACKET NUMBER RBRACKET SEMICOLON
		{}
	;

type_specifier:
	INT
		{}
	| VOID
		{}
	;

fun_declaration:
	type_specifier ID LPAREN params RPAREN compound_stmt
		{}
	;

params:
	param_list
		{}
	| VOID
		{}
	;

param_list:
	param_list COMMA param
		{}
	| param
		{}
	;

param:
	type_specifier ID
		{}
	| type_specifier ID LBRACKET RBRACKET
		{}
	;

compound_stmt:
	LBRACE local_declarations statement_list RBRACE
		{}
	;

local_declarations:
	local_declarations var_declaration
		{}
	| empty
		{}
	;

statement_list:
	statement_list statement
		{}
	| empty
		{}
	;

statement:
	expression_stmt
		{}
	| compound_stmt
	| selection_stmt
	| iteration_stmt
	| return_stmt
	;

expression_stmt:
	expression SEMICOLON
	| SEMICOLON
	;

selection_stmt:
	IF LPAREN expression RPAREN statement
	| IF LPAREN expression RPAREN statement ELSE statement
	;

iteration_stmt:
	WHILE LPAREN expression RPAREN statement
	;

return_stmt:
	RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;

expression:
	var ASSIGN expression
	| simple_expression
	;

var:
	ID
	| ID LBRACKET expression RBRACKET
	;

simple_expression:
	additive_expression relop additive_expression
	| additive_expression
	;

relop:
	LEQ
	| LT
	| GT
	| GEQ
	| EQ
	| NEQ
	;

additive_expression:
	additive_expression addop term
	| term
	;

addop:
	PLUS {printf("ADDING!\n");}
	| MINUS
	;

term:
	term mulop factor
	| factor
	;

mulop:
	MULT
	| DIV
	;

factor:
	LPAREN expression RPAREN
	| var
	| call
	| NUM
	;

call:
	ID LPAREN args RPAREN
	;

args:
	arg_list 
	| empty
	;

arg_list:
	arg_list COMMA expression
	| expression
	;

empty:
	;

%%

void yyerror(char *s)
{
	printf("ERROR: %s on line: %d\n", s, lineno);
}
