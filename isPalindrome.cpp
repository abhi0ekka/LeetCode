//
// Created by ABHISHEK EKKA on 09/06/24.
//
#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int);

int main()
{
    int num;
    cout<<"Enter a number to check weather it is a Palindrome or not"<<endl;
    cin>>num;
    if(isPalindrome(num))
        cout<<"true";
    else
        cout<<"false";
}

bool isPalindrome(int x)
{
    int val,rem,pal=0;
    val=x;
    if(x<0)
        return 0;
    while(x>0)
    {
        rem=x%10;
        if(pal<INT_MIN/10 || pal>INT_MAX/10)
            return 0;
        pal=pal*10 + rem;
        x=x/10;
    }

    return val==pal;
}