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
    vector<int> comp=height;    //To create the copy of the Code
    int count=0;

    for(int i=0;i<comp.size()-1;i++)
    {
        int min=i;
        for(int j=i;j<comp.size();j++)
        {
            if(comp[min]>comp[j])
            {
                min=j;
            }
        }

        swap(comp[i],comp[min]);
    }

    for(int i=0;i<height.size();i++)
    {
        if(height[i]!=comp[i])
            count++;
    }
    return count;
}