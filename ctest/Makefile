SHELL=/bin/sh

CC=gcc
CFLAGS= -std=c99 
OBJS= main.o function.o

test:$(OBJS)
	$(CC) $(CFLAGS) -o test $(OBJS)

main.o:function.h

function.o:function.h

clean:
	rm test *.o
