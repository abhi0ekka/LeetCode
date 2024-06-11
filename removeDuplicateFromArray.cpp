//
// Created by ABHISHEK EKKA on 11/06/24.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,4,5};
    vector<int>::iterator new_nums =unique(nums.begin(),nums.end());\
    nums.erase(new_nums,nums.end());
    for(int elements : nums)
        cout<<elements<<" ";
}