#include<iostream>
using namespace std;

int main()
{
    float marks;
    char grade;

    cout<<"Please Enter Your Score: ";
    cin>>marks;

   (marks >=81  && marks <= 100) ? grade = 'A' :
   (marks <= 80 && marks >=71) ? grade = 'B': 
   (marks <= 70 && marks >=61) ? grade = 'C': 
   (marks <= 60 && marks >=51) ? grade = 'D': 
   (marks <= 50 && marks >=41) ? grade = 'E': 
   (marks <= 40 && marks >=0) ? grade = 'F': 
   grade = ' ';

    switch(grade)
    {
        case 'A':
        cout<<"Your Grade is A, Excellent Work";
        break;

        case 'B':
        cout<<"Your Grade is B, Well Done";
        break;

        case 'C':
        cout<<"Your Grade is C, Good Job";
        break;

        case 'D':
        cout<<"Your Grade is D, You Passed but you could do better";
        break;

        case 'E':
        cout<<"Your Grade is E, You Passed but Need Improvement";
        break;

        case 'F':
        cout<<"Your Grade is F, Sorry you Failed";
        break;

        default:
        cout<<"Invalid Marks Entered";
        break;
    }

}