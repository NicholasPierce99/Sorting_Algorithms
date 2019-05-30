// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic

//includes
#ifndef INSERTION_H
#define INSERTION_H
#include "Sort.h"

class Insertion: public Sort {
	public:
		//constructor
		Insertion();
		//destructor
		~Insertion();
		//sort function
		virtual void sort(int * arrayInt);

};

#endif
