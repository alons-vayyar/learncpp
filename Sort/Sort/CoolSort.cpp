#include "CoolSort.h"





bool CoolSort::WriteIntToFile(const std::string& path, std::vector<std::string> myVec)
{
	std::ofstream myfile;
	//path.insert(path.begin() + 2, "\");
	myfile.open(path);
	if (myfile.is_open())
	{
		sortIntNew(myVec);
		sortStringsNew(myVec);

	}

	return true;
}