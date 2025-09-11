#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Please Enter the Size: ";
    cin >> n;

    int arr[n];

    cout << "Please Enter the Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=1; i<n; i++)
    {
        int key = arr[i];

        int j;
        for(j=i-1; j>=0 && key < arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }

    cout << "Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}