#include <iostream>
#include <cmath>
using namespace std;

double addition(double a, double b)
{
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    return a + b;
}
double substraction(double a, double b)
{
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    return a - b;
}
double multiplication(double a, double b)
{
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    return a * b;
}
double division(double a, double b)
{
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    return a / b;
}
double modulus_op(double a, double b)
{
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    return fmod(a, b);
}

int main()
{
    int choice;
    double a, b;
    do
    {
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for substraction" << endl;
        cout << "Press 3 for multiplication" << endl;
        cout << "Press 4 for division" << endl;
        cout << "Press 5 for modulus" << endl;
        cout << "Press 0 for exit" << endl;
    
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "addition is: " << addition(a, b) << endl;
            break;
        case 2:
            cout << "substraction is: " << substraction(a, b) << endl;
            break;
        case 3:
            cout << "multiplication is: " << multiplication(a, b) << endl;
            break;
        case 4:
            cout << "division is: " << division(a, b) << endl;
            break;
        case 5:
            cout << "modulus is: " << modulus_op(a, b) << endl;
            break;
        case 0:
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}