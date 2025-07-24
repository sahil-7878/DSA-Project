#include <iostream>
using namespace std;

int main()
{
    int row_size, col_size, i, j, max = 0;

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

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "The largest number is: " << max;
}