%token INTEGER

%%


program:
	declaration_list	{printf("Hello");}
	;

declaration_list:
	INTEGER			{printf("a");}

%%
