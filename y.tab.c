#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
extern int lineno;

#line 23 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INTEGER 257
#define ID 258
#define SEMICOLON 259
#define LBRACKET 260
#define RBRACKET 261
#define NUMBER 262
#define INT 263
#define VOID 264
#define LPAREN 265
#define RPAREN 266
#define COMMA 267
#define LBRACE 268
#define RBRACE 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define RETURN 273
#define ASSIGN 274
#define LEQ 275
#define LT 276
#define GT 277
#define GEQ 278
#define EQ 279
#define NEQ 280
#define PLUS 281
#define MINUS 282
#define MULT 283
#define DIV 284
#define NUM 285
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    3,    3,    5,    5,    4,
    6,    6,    8,    8,    9,    9,    7,   10,   10,   11,
   11,   13,   13,   13,   13,   13,   14,   14,   15,   15,
   16,   17,   17,   18,   18,   19,   19,   20,   20,   22,
   22,   22,   22,   22,   22,   21,   21,   23,   23,   24,
   24,   25,   25,   26,   26,   26,   26,   27,   28,   28,
   29,   29,   12,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    3,    6,    1,    1,    6,
    1,    1,    3,    1,    2,    4,    4,    2,    1,    2,
    1,    1,    1,    1,    1,    1,    2,    1,    5,    7,
    5,    2,    3,    3,    1,    1,    4,    3,    1,    1,
    1,    1,    1,    1,    1,    3,    1,    1,    1,    3,
    1,    1,    1,    3,    1,    1,    1,    4,    1,    1,
    3,    1,    0,
};
static const short yydefred[] = {                         0,
    8,    9,    0,    0,    3,    4,    5,    0,    2,    0,
    6,    0,    0,    0,    0,    0,    0,    0,   14,    0,
    0,    0,    0,    7,    0,   63,   10,   13,   16,    0,
   19,   18,    0,    0,   21,    0,    0,   28,    0,   17,
    0,    0,    0,   57,   23,   20,   22,   24,   25,   26,
    0,    0,   35,    0,    0,   51,   56,    0,    0,    0,
    0,    0,   32,    0,   27,    0,   40,   41,   42,   43,
   44,   45,   48,   49,    0,    0,   52,   53,    0,    0,
   60,   62,    0,    0,   54,    0,    0,   33,   34,   55,
    0,    0,   50,   37,   58,    0,    0,    0,   61,    0,
   31,    0,   30,
};
static const short yydgoto[] = {                          3,
    4,    5,    6,    7,    8,   17,   45,   18,   19,   30,
   34,   31,   46,   47,   48,   49,   50,   51,   52,   53,
   54,   75,   76,   55,   79,   56,   57,   83,   84,
};
static const short yysindex[] = {                      -195,
    0,    0,    0, -195,    0,    0,    0, -250,    0, -215,
    0, -244, -191, -209,    0, -204, -205, -211,    0, -193,
 -190, -187, -195,    0, -184,    0,    0,    0,    0, -195,
    0,    0, -164, -256,    0, -176, -228,    0, -232,    0,
 -158, -155, -218,    0,    0,    0,    0,    0,    0,    0,
 -147, -159,    0,  -95, -198,    0,    0, -232, -232, -148,
 -232, -232,    0, -140,    0, -232,    0,    0,    0,    0,
    0,    0,    0,    0, -232, -232,    0,    0, -232, -141,
    0,    0, -145, -134,    0, -130, -128,    0,    0,    0,
 -192, -198,    0,    0,    0, -232, -194, -194,    0, -126,
    0, -194,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,  141,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -251,    0,    0, -122,    0,    0,
 -174,    0,    0,    0,    0,    0,    0,    0,    0, -234,
    0,    0,    0,    0,    0,    0, -179,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -153,    0, -150, -127,    0,    0,    0, -120,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -119,    0,    0,    0,    0,    0,    0,
 -124, -103,    0,    0,    0,    0,    0,    0,    0, -210,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,  153,  129,    0,   -2,    0,  138,    0,  139,    0,
    0,  -29,  -92,    0,    0,    0,    0,  -39,  -33,    0,
   86,    0,    0,   89,    0,   87,    0,    0,    0,
};
#define YYTABLESIZE 187
static const short yytable[] = {                         60,
   35,   37,   38,   64,  100,  101,    9,   10,   39,  103,
   16,   26,   40,   41,   12,   42,   43,   14,   80,   82,
   16,   86,   87,   63,   63,   37,   89,   33,   44,   81,
   63,   58,   39,   63,   63,   63,   59,   63,   63,   37,
   63,   90,   90,   11,   12,   90,   39,   29,   29,   13,
   63,   20,   44,   21,   29,   23,   99,   29,   29,   29,
   22,   29,   29,   37,   38,   24,   44,    1,    2,   25,
   39,    1,   15,   26,   29,   41,   29,   42,   43,   36,
   26,   36,   11,   12,   77,   78,   36,   36,   73,   74,
   44,   15,   15,   36,   36,   36,   36,   36,   36,   36,
   36,   36,   36,   36,   36,   55,   61,   55,   39,   62,
   39,   65,   55,   55,   66,   39,   39,   85,   88,   94,
   95,   55,   55,   55,   55,   55,   55,   55,   55,   55,
   55,   47,   96,   47,   38,   97,   38,   98,   47,   47,
    1,   38,   38,   11,  102,   63,   59,   47,   47,   47,
   47,   47,   47,   47,   47,   46,    9,   46,   32,   27,
   91,   28,   46,   46,   92,   93,    0,    0,    0,    0,
    0,   46,   46,   46,   46,   46,   46,   46,   46,   67,
   68,   69,   70,   71,   72,   73,   74,
};
static const short yycheck[] = {                         39,
   30,  258,  259,   43,   97,   98,  258,  258,  265,  102,
   13,  268,  269,  270,  266,  272,  273,  262,   58,   59,
   23,   61,   62,  258,  259,  258,   66,   30,  285,   59,
  265,  260,  265,  268,  269,  270,  265,  272,  273,  258,
  259,   75,   76,  259,  260,   79,  265,  258,  259,  265,
  285,  261,  285,  258,  265,  267,   96,  268,  269,  270,
  266,  272,  273,  258,  259,  259,  285,  263,  264,  260,
  265,  263,  264,  268,  285,  270,  261,  272,  273,  259,
  268,  261,  259,  260,  283,  284,  266,  267,  281,  282,
  285,  266,  267,  258,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  259,  265,  261,  259,  265,
  261,  259,  266,  267,  274,  266,  267,  266,  259,  261,
  266,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  259,  267,  261,  259,  266,  261,  266,  266,  267,
    0,  266,  267,  266,  271,  266,  266,  275,  276,  277,
  278,  279,  280,  281,  282,  259,    4,  261,   30,   22,
   75,   23,  266,  267,   76,   79,   -1,   -1,   -1,   -1,
   -1,  275,  276,  277,  278,  279,  280,  281,  282,  275,
  276,  277,  278,  279,  280,  281,  282,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INTEGER","ID","SEMICOLON",
"LBRACKET","RBRACKET","NUMBER","INT","VOID","LPAREN","RPAREN","COMMA","LBRACE",
"RBRACE","IF","ELSE","WHILE","RETURN","ASSIGN","LEQ","LT","GT","GEQ","EQ","NEQ",
"PLUS","MINUS","MULT","DIV","NUM",
};
static const char *yyrule[] = {
"$accept : program",
"program : declaration_list",
"declaration_list : declaration_list declaration",
"declaration_list : declaration",
"declaration : var_declaration",
"declaration : fun_declaration",
"var_declaration : type_specifier ID SEMICOLON",
"var_declaration : type_specifier ID LBRACKET NUMBER RBRACKET SEMICOLON",
"type_specifier : INT",
"type_specifier : VOID",
"fun_declaration : type_specifier ID LPAREN params RPAREN compound_stmt",
"params : param_list",
"params : VOID",
"param_list : param_list COMMA param",
"param_list : param",
"param : type_specifier ID",
"param : type_specifier ID LBRACKET RBRACKET",
"compound_stmt : LBRACE local_declarations statement_list RBRACE",
"local_declarations : local_declarations var_declaration",
"local_declarations : empty",
"statement_list : statement_list statement",
"statement_list : empty",
"statement : expression_stmt",
"statement : compound_stmt",
"statement : selection_stmt",
"statement : iteration_stmt",
"statement : return_stmt",
"expression_stmt : expression SEMICOLON",
"expression_stmt : SEMICOLON",
"selection_stmt : IF LPAREN expression RPAREN statement",
"selection_stmt : IF LPAREN expression RPAREN statement ELSE statement",
"iteration_stmt : WHILE LPAREN expression RPAREN statement",
"return_stmt : RETURN SEMICOLON",
"return_stmt : RETURN expression SEMICOLON",
"expression : var ASSIGN expression",
"expression : simple_expression",
"var : ID",
"var : ID LBRACKET expression RBRACKET",
"simple_expression : additive_expression relop additive_expression",
"simple_expression : additive_expression",
"relop : LEQ",
"relop : LT",
"relop : GT",
"relop : GEQ",
"relop : EQ",
"relop : NEQ",
"additive_expression : additive_expression addop term",
"additive_expression : term",
"addop : PLUS",
"addop : MINUS",
"term : term mulop factor",
"term : factor",
"mulop : MULT",
"mulop : DIV",
"factor : LPAREN expression RPAREN",
"factor : var",
"factor : call",
"factor : NUM",
"call : ID LPAREN args RPAREN",
"args : arg_list",
"args : empty",
"arg_list : arg_list COMMA expression",
"arg_list : expression",
"empty :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 216 "parser.y"

void yyerror(char *s)
{
	printf("ERROR: %s on line: %d\n", s, lineno);
}
#line 327 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 43 "parser.y"
	{}
break;
case 2:
#line 48 "parser.y"
	{}
break;
case 3:
#line 50 "parser.y"
	{}
break;
case 4:
#line 55 "parser.y"
	{}
break;
case 5:
#line 57 "parser.y"
	{}
break;
case 6:
#line 62 "parser.y"
	{}
break;
case 7:
#line 64 "parser.y"
	{}
break;
case 8:
#line 69 "parser.y"
	{}
break;
case 9:
#line 71 "parser.y"
	{}
break;
case 10:
#line 76 "parser.y"
	{}
break;
case 11:
#line 81 "parser.y"
	{}
break;
case 12:
#line 83 "parser.y"
	{}
break;
case 13:
#line 88 "parser.y"
	{}
break;
case 14:
#line 90 "parser.y"
	{}
break;
case 15:
#line 95 "parser.y"
	{}
break;
case 16:
#line 97 "parser.y"
	{}
break;
case 17:
#line 102 "parser.y"
	{}
break;
case 18:
#line 107 "parser.y"
	{}
break;
case 19:
#line 109 "parser.y"
	{}
break;
case 20:
#line 114 "parser.y"
	{}
break;
case 21:
#line 116 "parser.y"
	{}
break;
case 22:
#line 121 "parser.y"
	{}
break;
case 48:
#line 177 "parser.y"
	{printf("ADDING!\n");}
break;
#line 625 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
