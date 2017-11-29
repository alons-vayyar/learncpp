
#include <string>
#include <vector>
#include "SortUtils.h"
#include "CoolSort.h"
#include <memory>
#include <iostream>


/*
 * Excercise 3: 
 * Write class that uses both methods and writes the outcome to a file.
 * public methods:
 * Method 1: bool method(path, vector<int>/vector<string>)
 * iterators - read
 * use smarter sort of stl - done?
 * Method 2: Read from file and print content to string
 * Surprise me
 */

	
// ostream
// ctor, dtor
// template sort function for every class that has the appropriate method (***)
// Create class student - give some parameters
// (***) Write an appropriate sorting method for student by age


int main(int argc, char* argv[])
{
	std::vector<std::string> myVec(argv+1, argv + argc);
	
	std::ofstream *MyFile;
	//CoolSort MySort;
	//myVec.erase(myVec.begin()); //erase the name of the program,first element
	//MySort.SetVector(myVec);
	//MySort.SortInt(std::cout);
	//MySort.SortStrings(std::cout);
	SortUtils<std::string>::SortAny(myVec);
	return 0;
}