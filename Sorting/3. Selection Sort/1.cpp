#include<iostream>
using namespace std;

class Sorting{

    public:
        void selection_sort(int arr[], int n)
        {
            for(int i=0; i<n-1; i++)
            {
                int min = i;
                for(int j=i+1; j<n; j++)
                {
                    if (arr[j] < arr[min])
                    {
                        min = j;
                    }
                }

                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        }

        void display(int arr[], int n)
        {
            cout << "array is: ";
            for(int i=0; i<n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    Sorting obj;
    int n;

    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];

    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    obj.display(arr, n);

    obj.selection_sort(arr, n);

    obj.display(arr, n);
}