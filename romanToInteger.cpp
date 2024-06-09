//
// Created by ABHISHEK EKKA on 09/06/24.
//
#include <iostream>
#include <string>
using namespace std;

int romanCharIntoInt(char x)
{
    switch (x)
    {
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default : return 0;
    }
}

int romanToInt(string s)
{
    int cur_val;
    int pre_val=0;
    for(char element : s)
    {

    }
}