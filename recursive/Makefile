OBJS=c.cc lex.yy.o
FLAGS=-lfl -ly -g
TARGET=compiler
all: final
lexed: c.l
	flex $^
yacced: c.y
	bison -dv $^ -o c.cc
compiled: lexed
	g++ lex.yy.c -c -g
final:	yacced compiled
	g++ ${OBJS} ${FLAGS} -o ${TARGET}
clean:
	rm lex.yy.o lex.yy.c c.cc c.hh compiler
