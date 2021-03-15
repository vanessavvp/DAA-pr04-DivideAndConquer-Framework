CC=gcc
CXX=g++
RM=rm -f
CFLAGS=-g -O2
LDFLAGS=-g -O2

FRAMEWORK_SRS=framework/Framework.cpp framework/Problema.cpp framework/Solucion.cpp
ORDERING_METHODS_SRS=src/MergeSortSolucion.cpp src/MergeSortProblema.cpp src/QuickSortSolucion.cpp src/QuickSortProblema.cpp
EXAMPLE_SRS=examples/FibonacciP.cpp examples/FibonacciS.cpp

SRCS=main.cpp $(FRAMEWORK_SRS) $(ORDERING_METHODS_SRS)
OBJS=$(subst .cpp,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o ./bin/exe $(OBJS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
