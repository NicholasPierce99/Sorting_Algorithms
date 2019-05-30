// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
// 
// piercnic


//standard includes for IO, fileIO, strings
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

//includes for sort files
#include "Sort.h"
#include "Bubble.h"
#include "Insertion.h"


//don't want to copy paste loading twice for sub menu, put in function
int loadNumbers(int intArr[]) {
	
	
	int i = 0;
	
	//load in data file
	std::ifstream inputFile("data.txt");
	std::stringstream stringStream;
	
	if (inputFile.is_open()) {
			
		while(!inputFile.eof()) {
		
			//clear stringstream of garbage data
			stringStream.clear();
			stringStream.str("");
			std::string line;
			
			//check if file has no more lines
			if(!getline(inputFile, line)) {
				break;
			}
			//create instance of string stream
			std::istringstream ss(line);
		
		//string stream lines conditions
		while (ss) {
			std::string numberString;
			
			//split line by commas
			if(!getline(ss, numberString, ',')) {
				break;
			}
			//use atoi function to convert strings to integers and populate array
			intArr[i++] = atoi(numberString.c_str());
		}
		
		}
	//close file
	inputFile.close();
	}
	//"catch" can't open file
	else {
		std::cout << "Unable to open file" << std::endl;
	} 
	//print out array to user
	std::cout << "Unsorted Array" << std::endl;
	for (int j = 0; j < 50; j++) {
		std::cout << intArr[j] << ",";
		
	}
	std::cout << std::endl;
	return 0;
}

//main function
int main () {
	
	//pointers to sort object and array object
	Sort * ptrSort;
	
	int * intArr;
	
	int userResponse;
	int userResponse2;
	
	//while loop conditions
	bool running = true;
	bool mainRunning = true;
	
	//menu
	while(mainRunning) {
		running = true;
		bool valid = false;
		while(!valid) {
		std::cout << "Pick a selection" << std::endl << "1. Load integers" <<std::endl << "2. Exit" << std::endl;
		std::cin >> userResponse;
		
		valid = true;
		
		//rerun if response is invalid
		if(std::cin.fail()) {
			std::cout << "You must input an integer!" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			valid = false;
		
		}
		}
		
		if (userResponse == 1) {
			intArr = new int[50];

			loadNumbers(intArr); 
		}
		if( userResponse == 2) {
			mainRunning = false;
			std::cout << "Thanks for sorting!";
			continue;
		}
		//sub menu
		while(running) {
			bool valid2 = false;
			while(!valid2) {
			std::cout << "Pick a selection" << std::endl << "1. Bubble Sort" <<std::endl << "2. Insertion Sort" << std::endl << "3. Exit" << std::endl;
			std::cin >> userResponse2;
			valid2 = true;
			
			//rerun of response is invalid
			if(std::cin.fail()) {
				std::cout << "You must input an integer!" << std::endl;
				std::cin.clear();
				std::cin.ignore();
				valid2 = false;
			}
		}
			//create bubble sort object and call sort function
			if (userResponse2 == 1) {
				ptrSort = new Bubble();
				ptrSort->sort(intArr);
				
				delete ptrSort;
				
				std::cout << "Bubble Sort" << std::endl;
				for (int j = 0; j < 50; j++) {
					std::cout << intArr[j] << ",";
				
				}
				running = false;
				valid = false;
				std::cout << std::endl;
				}
				
			//create insertion sort object and call sort function
			if(userResponse2 == 2) {
				ptrSort = new Insertion();
				ptrSort->sort(intArr);
				
				delete ptrSort;
				
				std::cout << "Insertion Sort" << std::endl;
				for (int j = 0; j < 50; j++) {
					std::cout << intArr[j] << ",";
				
				
				}
				running = false;
				valid = false;
				std::cout << std::endl;
			}
				
		
			//exit
			if (userResponse == 3) {
				running = false;
				mainRunning = false;
				std::cout << "Thanks for sorting!";
				continue;
			
			}
		}
	delete [] intArr;
	}
		
		return 0;
	}

