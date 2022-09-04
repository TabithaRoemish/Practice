//threeSum.cpp
// find all magic triplets in array
//output array order & string order not significant
//duplicates prohibited

#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;



int arr1[] = { 10, 3, -4, 1, -6, 9 };
//answer ["10,-4,-6", "3,-4,1"] - oreder doesn't matter

int arr2[] = { 12, 34, -46 };
//answer ["12,-46,34"]

int arr3[] = { 0, 0, 0 };
//answer ["0,0,0"]

int arr4[] = { -2, 2, 0, -2, 2 }; //{-2, -2, 0, 2, 2}
//answer ["2,-2,0]


int main()
{
    int test[] = { -6, -4, 1, 3, 5, 9, 13 };
    int length = (sizeof(test) / sizeof(test[0]));
    unordered_set<string> answers; 

    //sort so negative numbers are added with positive numbers

    sort(test, test+length);

    int num2 = 0;
    int num3 = 0;
    int searchVal = 0;
    for (int num1 = 0; num1 < length; num1++)
    {
        num2 = num1 + 1;
        num3 = length - 1;
        while (num3 > num2)
        {
            searchVal = -(test[num1] + test[num2]);
            if (searchVal < test[num3])
                num3--;
            else if (searchVal == test[num3])
            {
                string ans = to_string(test[num1]) + "," + to_string(test[num2]) + "," + to_string(test[num3]);
                answers.insert(ans);
                num2++;
            }
            else
                num2++;
        }
    }

    std::cout << "Here's the initial array: \n {";
    for (auto x : test)
        std::cout << x << ", ";
    std::cout << "\b\b}\nHere are the magical triplets!: \n";
    std::cout << "[";
    for (auto i : answers)
        std::cout << i << ", ";
    cout << "\b\b" << "]";


    
}
