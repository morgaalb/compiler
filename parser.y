%{
#include <stdio.h>

#include "globals.h"

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

%%

/* Rule 1 */
program:
	declaration_list
		{}
	;
	
/* Rule 2 */
declaration_list:
	declaration_list declaration
		{}
	| declaration
		{}
	;

/* Rule 3 */
declaration:
	var_declaration
		{}
	| fun_declaration
		{}
	;

/* Rule 4 */
var_declaration:
	type_specifier ID SEMICOLON
		{}
	| type_specifier ID LBRACKET NUMBER RBRACKET SEMICOLON
		{}
	;

/* Rule 5 */
type_specifier:
	INT
		{}
	| VOID
		{}
	;

/* Rule 6 */	
fun_declaration:
	type_specifier ID LPAREN params RPAREN compound_stmt
		{}
	;

/* Rule 7 */
params:
	param_list
		{}
	| VOID
		{}
	;

/* Rule 8 */
param_list:
	param_list COMMA param
		{}
	| param
		{}
	;

/* Rule 9 */	
param:
	type_specifier ID
		{}
	| type_specifier ID LBRACKET RBRACKET
		{}
	;

/* Rule 10 */
compound_stmt:
	LBRACE local_declarations statement_list RBRACE
		{}
	;

/* Rule 11 */
local_declarations:
	local_declarations var_declaration
		{}
	| /* empty */
		{}
	;

/* Rule 12 */
statement_list:
	statement_list statement
		{}
	| /* empty */
		{}
	;

/* Rule 13 */
statement:
	expression_stmt
		{}
	| compound_stmt
	| selection_stmt
	| iteration_stmt
	| return_stmt
	;

/* Rule 14 */
expression_stmt:
	expression SEMICOLON
	| SEMICOLON
	;

/* Rule 15 */
selection_stmt:
	IF LPAREN expression RPAREN statement
	| IF LPAREN expression RPAREN statement ELSE statement
	;

/* Rule 16 */
iteration_stmt:
	WHILE LPAREN expression RPAREN statement
	;

/* Rule 17 */
return_stmt:
	RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;

/* Rule 18 */
expression:
	var ASSIGN expression
	| simple_expression
	;

/* Rule 19 */
var:
	ID
	| ID LBRACKET expression RBRACKET
	;

/* Rule 20 */
simple_expression:
	additive_expression relop additive_expression
	| additive_expression
	;

/* Rule 21 */
relop:
	LEQ
	| LT
	| GT
	| GEQ
	| EQ
	| NEQ
	;

/* Rule 22 */
additive_expression:
	additive_expression addop term
	| term
	;

/* Rule 23 */
addop:
	PLUS {}
	| MINUS
	;

/* Rule 24 */
term:
	term mulop factor
	| factor
	;

/* Rule 25 */
mulop:
	MULT
	| DIV
	;

/* Rule 26 */
factor:
	LPAREN expression RPAREN
	| var
	| call
	| NUMBER
	;

/* Rule 27 */
call:
	ID LPAREN args RPAREN
	;

/* Rule 28 */
args:
	arg_list 
	| /* empty */
	;

/* Rule 29 */
arg_list:
	arg_list COMMA expression
	| expression
	;

%%

void yyerror(char *s)
{
	printf("ERROR: %s on line: %d\n", s, lineno);
}
