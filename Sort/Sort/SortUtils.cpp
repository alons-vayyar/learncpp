#include <string>
#include <vector>
#include <iostream>
#include "SortUtils.h"

bool SortUtils::SortByInt(std::string i, std::string j)
	{
		return std::stoi(i) < std::stoi(j);
	}
void SortUtils::PrintVectorScreen(std::vector<std::string> v1)
	{
		int k;
		for (k = 0; k < v1.size() - 1; k++)
		{
			std::cout << v1[k] << ", ";
		}
		std::cout << v1[v1.size() - 1] << std::endl;
	}
