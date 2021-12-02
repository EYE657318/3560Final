output: counts.o
	g++ counts.o

counts.o: counts.cpp
	g++ -c counts.cpp
