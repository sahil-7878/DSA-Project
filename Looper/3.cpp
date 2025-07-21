// develop a program to find sum of a first and last digits

#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;

    cout<<"Please Enter the Num: ";
    cin>>num;

    int lastNum = num%10, firstNum;

    if (num>=10)
    {
        while (num>=10)
        {
            num = num / 10;
        }
        firstNum = num;

        sum = firstNum + lastNum;
        cout<<"Sum of First Digit and Last Digit is: "<<sum;
    }
    else
    {
        cout<<"You entered 1 digit number";
    }
    
}