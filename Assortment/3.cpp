#include <iostream>
using namespace std;

int main()
{
    int row_size, col_size, i, j;

    cout << "Enter row size: ";
    cin >> row_size;
    cout << "Enter col size: ";
    cin >> col_size;

    int arr[row_size][col_size];

    cout << "Enter the elements: " << endl;
    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "The transpose of elements is: " << endl;

    for (j = 0; j < col_size; j++)
    {
        for (i = 0; i < row_size; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}