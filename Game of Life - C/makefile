CFLAGS = -g

Life: board.o Play.o Life.o
	gcc $(CFLAGS) -Wall board.o Play.o Life.o -lm -o Life

board.o: Life.h board.c
	gcc $(CFLAGS) -Wall -c board.c

Play.o: Life.h board.c Life.c Play.c
	gcc $(CFLAGS) -Wall -c Play.c
	
Life.o: Life.h board.c Life.c Play.c
	gcc $(CFLAGS) -Wall -c Life.c

clean:
	rm -f board.o Play.o Life.o Life

all: Life

