#pragma once
#include <string>
#include <vector>
template <class T>
class SortUtils
{
public:
	static bool SortByAny(T i, T j);
	static void PrintVector(const std::vector<T>& v1,std::ostream& out);
	static void SortAny(std::vector<T> MyVec);
};


