#Makefile for pi
CFLAGS=-O3

pi.out: main.cpp
	$(CXX) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf *~ *.out
