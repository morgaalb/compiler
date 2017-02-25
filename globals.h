/*#define NEWLINE			0
#define ERROR			1
#define ELSE			2
#define IF			3
#define INT			4
#define RETURN			5
#define VOID			6
#define WHILE			7
#define PLUS			8
#define MINUS			9
#define MULT			10
#define DIV			11
#define LT			12
#define LEQ			13
#define GT			14
#define GEQ			15
#define EQ			16
#define NEQ			17
#define ASSIGN			18
#define SEMI			19
#define COMMA			20
#define LPAREN			21
#define RPAREN			22
#define LBRACKET		23
#define	RBRACKET		24
#define LBRACE			25
#define RBRACE			26
#define READ			27
#define WRITE			28
#define NUMBER			29
#define ID			30
#define PROGRAM			31
#define DECLARATION		32
#define VARIABLE		33
#define ARRAY			34
#define FUNCTION		35
#define EXPRESSION		36
#define CALL			37
#define COMPOUND		38
#define TYPE_SPECIFIER		39
#define PARAMETER_LIST		40
#define PARAMETER_STATEMENT	41
#define STATEMENT		42
#define ARGUMENTS		43
*/

#define GET_NAME(x)	#x

int lineno;

#define YYDEBUG 0
