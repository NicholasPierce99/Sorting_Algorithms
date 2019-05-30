// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic

#ifndef BUBBLE_H
#define BUBBLE_H

#include "Sort.h"

class Bubble : public Sort {
	public:
		Bubble();
		~Bubble();
		virtual void sort(int * intPtr);
	
};


#endif
