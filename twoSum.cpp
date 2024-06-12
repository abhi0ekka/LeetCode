//
// Created by ABHISHEK EKKA on 12/06/24.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &num,int);

int main()
{
  vector<int> nums={3,2,4};
  int val=6;
  for(int element : twoSum(nums,val))
    cout<<element<<" ";

}

vector<int> twoSum(vector<int> &num, int val) {
  for(int i=0;i<num.size()-1;i++)
  {
    for(int j=i+1;j<num.size();j++)
    {
      if(num[i]+num[j]==val)
        return {i,j};
    }
  }
  return {};
}