#pragma once

#include <vector>


class CoolSort
{
public:
	CoolSort(size_t size, int ivalue);
	~CoolSort();

	void SetVector(const std::vector<std::string>& v1);
	void SortInt(std::ostream& out);
	void SortStrings(std::ostream& out);
private:
	std::vector<std::string> MyVec;

};
