.SUFFIXES:.c .o

CXX=g++
CXXFLAGS= -std=c++11
SRCS=main.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=test

test:$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)
	@echo "------echo------OK-----------"

#.cpp.o:
#	$(CXX) $(CXXFLAGS) -Wall -o $@ -c $<


clean:
	rm -rf $(EXEC) $(OBJS)
