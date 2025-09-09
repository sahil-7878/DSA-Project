#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s+e) / 2;

    int len = mid - s + 1;
    int len2 = e - mid;

    int *first = new int(len);
    int *second = new int(len2);

    // copy values
    int mainIndex = s;
    for(int i=0; i<len; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // merge
    int index = 0;
    int index2 = 0;

    mainIndex = s;

    while(index < len && index2 < len2)
    {
        if (first[index] < second[index2])
        {
            arr[mainIndex++] = first[index++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index < len)
    {
        arr[mainIndex++] = first[index++];
    }
    
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s==e)
    {
        return;
    }

    int mid = (s+e)/2;

    // left array
    mergeSort(arr, s, mid);
    
    // right array
    mergeSort(arr, mid+1, e);

    // merge
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {2,5,1,6,9};

    int n=5;

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}