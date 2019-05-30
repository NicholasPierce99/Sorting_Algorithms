// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic

#include <stdlib.h>
#include "Insertion.h"
#include "Sort.h"

Insertion::Insertion() {

}

Insertion::~Insertion() {

}
//insertion sort algorithm
void Insertion::sort(int * intArray) {
	//indexes for swapping
	int i = 0;
	int j = 0;
	
	//current position
	int temp;
	
	//outer loop
	for(i = 1; i < 50; i++) {
		temp = intArray[i];
		j = i - 1;
		//inner
		while(j >= 0 && intArray[j] < temp) {
			//swap 2 with 1
			intArray[j + 1] = intArray[j];
			j = j -1;
			
		}
		//swap from position 1
		intArray[j + 1] = temp;
	}
}
