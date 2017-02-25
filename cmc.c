#include <stdio.h>
#include "globals.h"

extern int yydebug;
extern int yy_flex_debug;
extern int lineno;

int main()
{
	yydebug = 1;
	yy_flex_debug = 1;
	lineno = 1;
	yyparse();
}
