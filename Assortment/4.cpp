#include <iostream>
using namespace std;

int main()
{
    int row_size, col_size, row_sum = 0, col_sum = 0, row_input, col_input, i, j;

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

    cout << "Enter the row no.: ";
    cin >> row_input;
    if (row_input < 0 || row_input >= row_size)
    {
        cout << "Invalid row number!" << endl;
    }
    else
    {
        cout << "Elements of row " << row_input << ": ";
        for (int j = 0; j < col_size; j++)
        {
            cout << arr[row_input][j] << " ";
            row_sum += arr[row_input][j];
        }
        cout << endl;
        cout << "The sum of the " << row_input << " is: " << row_sum << endl;
    }

    cout << "Enter the col no.: ";
    cin >> col_input;
    if (col_input < 0 || col_input >= col_size)
    {
        cout << "Invalid col number!" << endl;
    }
    else
    {
        cout << "Elements of col " << col_input << ": ";
        for (int i = 0; i < col_size; i++)
        {
            cout << arr[i][col_input] << " ";
            col_sum += arr[i][col_input];
        }
        cout << endl;
        cout << "The sum of the " << col_input << " is: " << col_sum << endl;
    }
}