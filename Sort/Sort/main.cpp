#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <string.h>
#include <vector>
#include <list>
#include <algorithm>
#include <fstream>


bool byInt(std::string i, std::string j)
{
	return std::stoi(i) < std::stoi(j);
} // sort by int
void printVector(std::vector <std::string> v1)
{
	int k;
	for (k = 0; k < v1.size() - 1; k++)
	{
		std::cout << v1[k] << ", ";
	}
	std::cout << v1[v1.size() - 1] << std::endl;
}
void sortIntsOld(int size,char* array_to_sort[])
{
	int i = 0, j,k;
	char* newNum;
	char* temp;
	for(j=2 ; j < size; j++)
	{
		newNum = array_to_sort[j];
		i = j - 1;
		while( (i>0) && (std::stoi(newNum) < std::stoi(array_to_sort[i])) )
		{
			temp = array_to_sort[i + 1];
			array_to_sort[i + 1] = array_to_sort[i];
			array_to_sort[i] = temp;
			i--;
		}
		array_to_sort[i + 1] = newNum;
	}
	for(k=1 ; k < size-1 ; k++)
	{
		std::cout << array_to_sort[k] << ", ";
	}
	std::cout << array_to_sort[size - 1] << std::endl;
}
void sortStringsNew(std::vector <std::string> v1)
{
	v1.erase(v1.begin()); //erase the name of the program,first element
	std::sort(v1.begin(), v1.end());
	printVector(v1);
}
void sortIntNew(std::vector <std::string> v1)
{
	v1.erase(v1.begin()); //erase the name of the program,first element
	std::sort(v1.begin(), v1.end(), byInt);
	printVector(v1);
}
void sortStringsOld(int size, char* array_to_sort[])
{
	int i = 0, j, k;
	char* newNum;
	char* temp;
	for (j = 2; j < size; j++)
	{
		newNum = array_to_sort[j];
		i = j - 1;
		while ((i>0) && (strcoll(newNum,array_to_sort[i]))<0)
		{
			temp = array_to_sort[i + 1];
			array_to_sort[i + 1] = array_to_sort[i];
			array_to_sort[i] = temp;
			i--;
		}
		array_to_sort[i + 1] = newNum;
	}
	for (k = 1; k < size - 1; k++)
	{
		std::cout << array_to_sort[k] << ", ";
	}
	std::cout << array_to_sort[size - 1] << std::endl;
}

/*
 * sort:
 * Receives an array of number [0, 1000] and prints (nicely) a sorted array
 * Restrictions: Don't copy data at all!
 * Example:
 *  input: 1, 3, 2
 *  prints 1, 2, 3
 */

/*Excercise 2
 * Export your current code into a method
 * Same thing - now strings - in method
 * Receives an array of char* and prints (nicely) a sorted array
 * Restrictions: Don't copy data at all!
 */

/*
 * Excercise 3: old not working
 * Write class that uses both methods and writes the outcome to a file.
 * public methods:
 * Method 1: bool method(path, vector<int>/vector<string>)
 * iterators - read
 * use smarter sort of stl - done?
 * Method 2: Read from file and print content to string
 * Surprise me
 */

/*class coolsort
{
public:
	bool writeIntToFile(std::string path,std::vector<int> myVec)
	{
		std::ofstream myfile;
		//path.insert(path.begin() + 2, "\");
		myfile.open(path);
		if(myfile.is_open())
		{
			sortIntNew(myVec.size(),myVec)

		}
	}

private:


}*/
	
int main(int argc, char* argv[])
{
	std::vector<std::string> myVec(argv, argv + argc);
	sortStringsNew(myVec);
	sortIntNew(myVec);

	//std::vector<int> a(10);
	//std::string k;
	//std::vector<int>::iterator it;

	return 0;
}