#include "CoolSort.h"
#include "SortUtils.h"
#include <algorithm>


CoolSort::CoolSort(size_t size, int ivalue)
{
		
}

CoolSort::~CoolSort()
{
	
}

void CoolSort::SortStrings(std::ostream& out)
{
	std::sort(MyVec.begin(), MyVec.end());
	SortUtils::PrintVector(MyVec,out);
}

void CoolSort::SortInt(std::ostream& out)
{
	std::sort(MyVec.begin(), MyVec.end(), SortUtils::SortByInt);
	SortUtils::PrintVector(MyVec,out);
}

void CoolSort::SetVector(const std::vector<std::string>& v1)
{
	MyVec = v1;
}
