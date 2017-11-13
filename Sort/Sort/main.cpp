#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <string.h>
#include <vector>
#include <list>
#include <algorithm>
#include <fstream>
#include "SortUtils.h"
#include "CoolSort.h"


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

	
int main(int argc, char* argv[])
{
	std::vector<std::string> myVec(argv, argv + argc);
	CoolSort MySort;
	MySort.SetVector(myVec);
	MySort.SortInt();




	//std::vector<int> a(10);
	//std::string k;
	//std::vector<int>::iterator it;

	return 0;
}