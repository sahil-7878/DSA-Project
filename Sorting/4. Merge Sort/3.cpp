#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i=st, j = mid+1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j]) // arr[i] >= arr[j] for descending
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int ind=0; ind<temp.size(); ind++)
    {
        arr[ind+st] = temp[ind];
    }
    
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = (st+end) / 2;

        // left part
        mergeSort(arr, st, mid);

        // right part
        mergeSort(arr, mid+1, end);

        merge(arr, st, mid, end);
    }
}

void input(vector<int> &arr, int n)
{
    int elem;
    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Arr["<<i<<"]: ";
        cin >> elem;
        arr.push_back(elem);
    }
}

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;

    vector<int> arr;

    input(arr, n);

    mergeSort(arr, 0, arr.size()-1);

    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}