#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++)
    {
        if (arr[j] <= pivot) //(arr[j] >= pivot) for descending
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pvtIdx = partition(arr, st, end);

        quickSort(arr, st, pvtIdx-1); //left half
        quickSort(arr, pvtIdx+1, end); // right half
    }
}

void input(vector<int> &arr, int n)
{
    int value;
    cout << "Enter Array Elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> value;
        arr.push_back(value);
    }
}

int main()
{
    vector<int> arr;

    int n;

    cout << "Enter Array of Size: ";
    cin >> n;

    input(arr, n);

    quickSort(arr, 0, arr.size()-1);

    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}   