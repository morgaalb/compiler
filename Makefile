cmc: lex.yy.o
	gcc -o cmc lex.yy.o

lex.yy.o: scanner.l
	lex scanner.l
	gcc -c lex.yy.c

clean:
	rm -f *.o cmc

