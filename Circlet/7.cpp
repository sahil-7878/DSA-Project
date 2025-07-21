#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=5; j>=i; j--)
        {
            if (i == 2)
            {
                cout<<"*\t*"<<endl;
            }
            else if (i == 4 || i == 5)
            {
                cout<<"*"<<endl;
            }
            else{
                cout<<j;
            }
        }
    }
}