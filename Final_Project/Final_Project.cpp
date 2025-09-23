#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(NULL) {}
};

class List
{
    Node *head;

public:
    List() : head(NULL) {}

    void insert(int val);
    void update(int oldVal, int newVal);
    bool search(int val);
    void display();
    vector<int> toVector();
    void fromVector(vector<int> &v);
};

void merge(vector<int> &a, int left, int mid, int right);

void mergeSort(vector<int> &a, int left, int right);

int partition(vector<int> &arr, int low, int high);

void quickSort(vector<int> &arr, int low, int high);

int binarySearch(vector<int> &arr, int key);

void mainMenu();

int main()
{
    List list;
    int choice, val, oldVal, newVal, searchVal, algo;

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;
        vector<int> arr;

        switch (choice)
        {
        case 1:
            cout << "Enter data to insert: ";
            cin >> val;
            list.insert(val);
            cout << endl;
            break;

        case 2:
            cout << "Enter data to update: ";
            cin >> oldVal;
            cout << "Enter new data: ";
            cin >> newVal;
            list.update(oldVal, newVal);
            break;

        case 3:
            cout << "Enter Search element: ";
            cin >> searchVal;
            cout << (list.search(searchVal) ? "Element found" : "Element not found") << endl;
            break;

        case 4:
            arr = list.toVector();
            cout << "1. Merge Sort\n2. Quick Sort\nEnter your choice: ";
            cin >> algo;
            if (algo == 1)
                mergeSort(arr, 0, arr.size() - 1);

            else if (algo == 2)
                quickSort(arr, 0, arr.size() - 1);

            else
            {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
            list.fromVector(arr);
            cout << "Sorted.\n";
            break;

        case 5:
            cout << "Elements of the List: ";
            list.display();
            cout << endl;
            break;

        case 6:
            arr = list.toVector();
            sort(arr.begin(), arr.end());
            cout << "Search: ";
            cin >> searchVal;
            cout << (binarySearch(arr, searchVal) != 1 ? "Element found" : "Element not found") << endl;
            break;

        case 0:
            cout << "Exiting the program..." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl
                 << endl;
        }
    }

    return 0;
}

void mainMenu()
{
    cout << "Menu:" << endl
         << "1. Insert element in the list" << endl
         << "2. Update an element from the list" << endl
         << "3. Search an element from the list" << endl
         << "4. Sort the list(ascending order)" << endl
         << "5. Display element from the list" << endl
         << "6. Binary Search" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

void List::insert(int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void List::update(int oldVal, int newVal)
{
    Node *curr = this->head;
    while (curr)
    {
        if (curr->data == oldVal)
        {
            curr->data = newVal;
            cout << "Updated " << oldVal << " to " << newVal << endl;
            return;
        }
        curr = curr->next;
    }
    cout << "Node not found" << endl;
}

bool List::search(int val)
{
    for (Node *curr = this->head; curr; curr = curr->next)
        if (curr->data == val)
            return true;
    return false;
}

void List::display()
{
    for (Node *curr = this->head; curr; curr = curr->next)
        cout << curr->data << " ";
    cout << endl;
}

vector<int> List::toVector()
{
    vector<int> v;
    for (Node *curr = this->head; curr; curr = curr->next)
        v.push_back(curr->data);
    return v;
}

void List::fromVector(vector<int> &v)
{
    head = NULL;
    for (int i = v.size() - 1; i >= 0; i--)
        insert(v[i]);
}

void merge(vector<int> &a, int left, int mid, int right)
{
    vector<int> leftArr(a.begin() + left, a.begin() + mid + 1);
    vector<int> rightArr(a.begin() + mid + 1, a.begin() + right + 1);

    int i = 0, j = 0, k = left;

    while (i < leftArr.size() && j < rightArr.size())
        a[k++] = (leftArr[i] < rightArr[j]) ? leftArr[i++] : rightArr[j++];

    while (i < leftArr.size())
        a[k++] = leftArr[i++];

    while (j < rightArr.size())
        a[k++] = rightArr[j++];
}

void mergeSort(vector<int> &a, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (arr[j] < pivot)
            swap(arr[++i], arr[j]);
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int binarySearch(vector<int> &arr, int key)
{
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}