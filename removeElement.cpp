//
// Created by ABHISHEK EKKA on 12/06/24.
//
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums,int );

int main()
{
    vector<int> nums={1,2,3,4,5};
    cout<<"The Output is : "<<removeElement(nums,5);
}

int removeElement(vector<int> &nums,int val)
{
    nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
    return nums.size();
}