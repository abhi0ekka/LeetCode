//
// Created by ABHISHEK EKKA on 11/06/24.
//
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> nums);

int main()
{
    cout<<"The Output : "<<removeDuplicates({1,2,3,4,4,5});
}

int removeDuplicates(vector<int> nums) {
    vector<int> temp = nums;     //creating duplicate vector
    sort(temp.begin(), temp.end());
    for(int i=0;i<temp.size()-1;i++)
    {
        for(int j=0;j)
    }
    return temp.size();
}