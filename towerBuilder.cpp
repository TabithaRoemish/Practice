//--------------------------------------------------------
// Tower Builder
//	Instructions: create a method that takes in an integer
//		nFloors and builds a tree with nFloors.
//	Example Output with 4 nFloors:
//		{  * ,
//		  *** ,
//		 ***** ,
//		*******}
//	Programmer: TR
//---------------------------------------------------------
#include<vector>
#include<iostream>
#include<string>
std::vector<std::string> towerBuilder(int nFloors);

int main()
{
	std::vector<std::string> tower = towerBuilder(6);

	for (int i = 0; i < tower.size(); i++)
		std::cout << tower[i] << std::endl;

	return 0;
}


std::vector<std::string> towerBuilder(int nFloors)
{
	std::string tempstar = "";
	std::string tempspace = "";
	std::string tempString = "";

	int max = 1;
	int spacecount = nFloors;
	std::vector<std::string> myVector;

	for (int i = 1; i <= nFloors; i++)
	{
		spacecount--;
		max = i + i - 1;
		for (int m = 0; m < spacecount; m++)
			tempspace += " ";
		for (int j = max; j> 0; j--)
		{
			tempstar += "*";
		}
		tempString = tempspace + tempstar + tempspace;
		myVector.push_back(tempString);
		tempString = "";
		tempstar = "";
		tempspace = "";
	}
	return myVector;
}