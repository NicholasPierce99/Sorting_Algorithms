// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic

#ifndef SORT_H
#define SORT_H

//base sort class
class Sort {
	public:
		
		//pure virtual method
		virtual void sort(int * intArray) = 0;
		//fish
		virtual ~Sort() = 0;
		
};

#endif //end header guard
