#include "CoolSort.h"
#include "SortUtils.h"
#include <algorithm>


void CoolSort::SortStrings()
{
	this->MyVec.erase(this->MyVec.begin()); //erase the name of the program,first element
	std::sort(this->MyVec.begin(), this->MyVec.end());
	SortUtils::PrintVectorScreen(this->MyVec);
}

void CoolSort::SortInt()
{
	this->MyVec.erase(this->MyVec.begin()); //erase the name of the program,first element
	std::sort(this->MyVec.begin(), this->MyVec.end(), SortUtils::SortByInt);
	SortUtils::PrintVectorScreen(this->MyVec);
}

void CoolSort::SetVector(std::vector<std::string> v1)
{
	this->MyVec = v1;
}
