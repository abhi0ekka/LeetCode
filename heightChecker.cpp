//
// Created by ABHISHEK EKKA on 10/06/24.
//
#include <iostream>
#include <vector>
using namespace std;

int heightChecker(const  vector<int> &height );

int main()
{
    cout << "The Output : " << endl << heightChecker({5, 4, 3, 2, 1});
    return 0;
}

int heightChecker(const vector<int> &height)
{
    vector<int> temp=height;    //To create the copy of the Code
    int count=0;

    sort(temp.begin(),temp.end());

    for(int i=0;i<height.size();i++)
    {
        if(height[i]!=temp[i])
            count++;
    }
    return count;
}