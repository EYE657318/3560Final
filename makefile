output: counts.o
	g++ counts.o -o "count.exe"

counts.o: counts.cpp
	g++ -c counts.cpp
