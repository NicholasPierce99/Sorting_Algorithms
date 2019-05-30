// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic

a.out: Bubble.o Insertion.o	Driver.o Sort.o
	g++ Bubble.o Insertion.o Driver.o Sort.o -o a.out
Sort.o: Sort.cpp
	g++ -c Sort.cpp -o Sort.o
Bubble.o: Bubble.cpp	
	g++ -c Bubble.cpp -o Bubble.o
Insertion.o: Insertion.cpp
	g++ -c Insertion.cpp -o Insertion.o
Driver.o : Driver.cpp 
		g++ -c Driver.cpp -o Driver.o
clean:	
	rm -f Driver.o Bubble.o Insertion.o a.out
