#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Enter The Elements of Array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Original Array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pass = 1;
    while (pass < n)
    {
        for(int i=0; i<n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = temp;
            }
        }
        pass++;
    }
    
    cout << "Sorted Array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}