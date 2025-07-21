#include<iostream>
using namespace std;

int main()
{
    float score;
    char grade;

    cout<<"Please Enter the Score: ";
    cin>>score;

    if (score >=81.1 && score <=100 )
    {
        grade = 'A';
    }
    else if (score >= 71.1 && score <= 80.9)
    {
        grade = 'B';
    }
    else if (score >= 61.1 && score <= 70.9)
    {
        grade = 'C';
    }
    else if (score >= 51.1 && score <= 60.9)
    {
        grade = 'D';
    }
    else if (score >= 41.1 && score <= 50.9)
    {
        grade = 'E';
    }
    else if (score >= 0 && score <= 40.9)
    {
        grade = 'F';
    }
    else {
        grade = ' ';
    }
    
    if (grade >= 'A' || grade <= 'D')
    {
        cout<<"Your Grade is "<<grade<<" you are Elligible for Next level";
    }
    else {
        cout<<"Your Grade is "<<grade<<" please try again next time";
    }
}