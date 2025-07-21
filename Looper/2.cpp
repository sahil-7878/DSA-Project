// develop a program to count the total number of digits in a number

#include<iostream>
using namespace std;

int main()
{
    int num, count=0;

    cout<<"Enter a Number: ";
    cin>>num;

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }
    cout<<"This number is "<<count<<" Digit Long.";    
    
}