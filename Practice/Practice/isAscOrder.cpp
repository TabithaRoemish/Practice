//kata practice space - Tabitha Roemish
#include<vector>
#include<iostream>
#include<string>
bool isAscOrder(std::vector<int> arr);

//int main()
//{
//	int arr[] = { 3,2,1 };
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 1, 4, 2 };
//
//	std::vector<int> array0(arr, arr + sizeof(arr)/sizeof(int));
//	std::vector<int> array1(arr1, arr1 + sizeof(arr1) / sizeof(int));
//	std::vector<int> array2(arr2, arr2 + sizeof(arr2) / sizeof(int));
//
//	bool assertFalse = isAscOrder(array0);
//	bool assertTrue = isAscOrder(array1);
//	bool assertFalse2 = isAscOrder(array2);
//	std::string sassertFalse = (assertFalse == false) ? "False" : "True";
//	std::string sassertTrue = (assertTrue == true) ? "True" : "False";
//	std::string sassertFalse2 = (assertFalse2 == false) ? "False" : "True";
//
//
//	std::cout << "assertFalse: " << sassertFalse << std::endl;
//	std::cout << "assertTrue: " << sassertTrue << std::endl;
//	std::cout << "assertFalse2: " << sassertFalse2 << std::endl;
//
//	return 0;
//}
//
//
//bool isAscOrder(std::vector<int> arr)
//{
//	std::vector<int>::iterator it = arr.begin();
//	std::vector<int>::iterator end = arr.end();
//	end--;
//	while (it != arr.end())
//	{
//		if(it != end)
//			it++;
//		if (*it < *(it - 1))
//			return false;
//	}
//
//	return true;
//}