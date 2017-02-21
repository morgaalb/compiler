cmc: lex.yy.o y.tab.o
	gcc -o cmc lex.yy.o

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c y.tab.h
	gcc -c y.tab.c

lex.yy.c: scanner.l y.tab.h
	lex scanner.l

y.tab.c y.tab.h: parser.y
	yacc -d parser.y

clean:
	rm -f *.o lex.yy.c y.tab.h y.tab.c cmc

