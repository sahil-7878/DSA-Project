#include<iostream>
using namespace std;

int main()
{
    float marks;

    cout<<"Please Enter the Marks: ";
    cin>>marks;

   (marks  >=81  && marks <= 100) ? cout<<"Grade is A" :
   (marks <= 80 && marks >=71) ? cout<<"Grade is B": 
   (marks <= 70 && marks >=61) ? cout<<"Grade is C": 
   (marks <= 60 && marks >=51) ? cout<<"Grade is D": 
   (marks <= 50 && marks >=41) ? cout<<"Grade is E": 
   (marks <= 40 && marks >=0) ? cout<<"Grade is F": 
   cout<<marks<<" is Invalid" ;
   
}