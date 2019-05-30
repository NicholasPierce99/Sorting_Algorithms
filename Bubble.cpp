// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic

//includes
#include <stdlib.h>
#include "Bubble.h"
#include "Sort.h"

//constructor
Bubble::Bubble() {

}
//destructor
Bubble::~Bubble() {

}

void Bubble::sort(int * intArray) {
	
	//is swapped
	bool swap = true;
	
	//temp variable for swapping
	int temp;
	
	//perform bubble sort operations, check if right is greater than left and swap until completed
	for(int i = 0; i < 50 && swap; i++) {
		swap = false;
		for (int j = 0; j < 50; j++) {
			if (intArray[j + 1] > intArray[j]) {
				if (j + 1 == 50) {
					continue;
				}
				else {
					temp = intArray[j];
					intArray[j] = intArray[j + 1];
					intArray[j + 1] = temp;
					swap = true;
				}
			}
		}
	}

}
