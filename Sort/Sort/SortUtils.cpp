#include <string>
#include <vector>
#include <iostream>
#include "SortUtils.h"
#include <map>
#include <algorithm>


template <class T>
bool SortUtils<T>::SortByAny(T i, T j)
{
	return std::stoi(i) < std::stoi(j);
}

template <class T>
void SortUtils<T>::PrintVector(const std::vector<T>& v1, std::ostream& out)
{
	for (size_t k = 0; k < v1.size() - 1; k++)
	{
		out << v1[k] << ", ";
	}
	out << v1[v1.size() - 1] << std::endl;
}

template <class T>
void SortAny(std::vector<T> MyVec)
{
	std::sort(MyVec.begin(), MyVec.end());
	SortUtils<T>::PrintVector(MyVec);
}