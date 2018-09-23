.SUFFIXES:.c .o

CC=g++

SRCS=test.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=test

test:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo "------------OK-----------"

.c.o:
	$(CC) -Wall -o $@ -c $<

clean:
	rm -rf $(EXEC) $(OBJS)
