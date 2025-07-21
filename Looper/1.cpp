// develop a program that prints all alphabets from a to z by skipping 3 alphabets using do  while loop
#include<iostream>
using namespace std;

int main()
{
    char character = 'a';

    do
    {
        cout<<character<<"  ";
        character+= 4;
    } while (character <= 'z');
    
}