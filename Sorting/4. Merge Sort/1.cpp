#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int> &a)
{
    cout << "Array is: ";
    for(int i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <=mid && right<=high)
    {
        if (a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
        
    for(int i=low; i<=high; i++)
    {
        a[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &a, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    
    int mid = (low + high) / 2;
    merge_sort(a, low, mid); // left array
    merge_sort(a, mid+1, high); // right array
    merge(a, low, mid, high); // right array
}

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;

    vector<int> a;

    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        int element;
        cout << "Enter a["<<i<<"]: ";
        cin >> element;
        a.push_back(element);
    }

    print_array(a);

    merge_sort(a, 0, n-1);

    print_array(a);
}