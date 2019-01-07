.SUFFIXES:.c .o

CXX=g++
CXXFLAGS= -std=c++11
SRCS=test.cpp print.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=test

test:$(OBJS) print.h
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)
	@echo "------echo------OK-----------"

#.cpp.o:
#	$(CXX) $(CXXFLAGS) -Wall -o $@ -c $<

print.o:print.h

clean:
	rm -rf $(EXEC) $(OBJS)
