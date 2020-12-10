.SUFFIXES:.c.o

CXX=gcc
#CXXFLAGS= -std=c99
SRCS=transpose.c
OBJS=$(SRCS:.cu=.o)
EXEC=transpose

$(EXEC):$(OBJS)
	$(CXX) -o $(EXEC) $(OBJS)

$(OBJS):$(SRCS)
	$(CXX) -c $(SRCS)

	@echo "------echo------OK-----------"

#.cpp.o:
#	$(CXX) $(CXXFLAGS) -Wall -o $@ -c $<


clean:
	rm -rf $(EXEC) $(OBJS)
