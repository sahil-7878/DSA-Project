#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{

protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }

    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    double getBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void getAccountInfo()
    {
        cout << "Account Number: ";
        cin >> accountNumber;

        cout << "Holder Name: ";
        cin >> accountHolderName;

        cout << "Initial Balance: ";
        cin >> balance;
    }

    void displayAccountInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest() {};
};

class SavingsAccount : public BankAccount
{
protected:
    double interestRate;

public:
    void calculateInterest() override
    {
        cout << "Enter the Interest Rate: ";
        cin >> interestRate;

        double interest = balance * interestRate / 100;
        cout << endl
             << "Savings Account Interest: " << interest << endl
             << "For Account Number: " << accountNumber << endl
             << "Account Holder Name: " << accountHolderName;
    }
};

class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    void checkOverdraftLimit()
    {
        cout << "Enter the Limit of Overdraft: ";
        cin >> overdraftLimit;
    }
    void withdraw()
    {
        double withdraw, amount;
        cout << "Enter WithDraw Value: ";
        cin >> withdraw;

        amount = balance + overdraftLimit;
        if (withdraw > amount)
        {
            cout << "Insuficient Balance" << endl;
        }
        else
        {
            balance -= withdraw;
            cout << withdraw << " Withdrawed" << endl;
        }
    }
};
class FixedDepositAccount : public BankAccount
{
    double rate, interest;
    int term;

public:
    void calculatelnterest()
    {
        rate = 7;

        cout << "Enter period of Terms(months) you wanted to make F.D.: ";
        cin >> term;

        interest = balance * rate * term / (12 * 100);
        cout << "Fixed Deposit Interest: " << interest
             << " for term: " << term << " months" << endl;
    }
};

int main()
{
    int choice, userChoice;
    do
    {

        cout << "----- Banking System -----" << endl;
        cout << "1. For Viewing Accounts" << endl
             << "2. For Checking Accounts" << endl
             << "3. For Fixed Deposit" << endl
             << "0. For Exit" << endl
             << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            SavingsAccount SA;
            SA.getAccountInfo();

            while (userChoice != 0)
            {
                cout << "----- Menu -----" << endl
                     << "1. Deposit" << endl
                     << "2. Withdraw" << endl
                     << "3. Show Balance" << endl
                     << "4. Show Account Info" << endl
                     << "5. Calculate Interest" << endl
                     << "0. Exit" << endl
                     << "Enter your choice: ";
                cin >> userChoice;

                switch (userChoice)
                {
                case 1:
                    SA.deposit();
                    break;
                case 2:
                    SA.withdraw();
                    break;
                case 3:
                    SA.getBalance();
                    break;
                case 4:
                    SA.displayAccountInfo();
                    break;
                case 5:
                    SA.calculateInterest();
                    break;
                case 0:
                    cout << "Thank you visit again!..." << endl;
                    break;

                default:
                    cout << "Invalid choice" << endl;
                    break;
                }
            }
        }

        else if (choice == 2)
        {
            CheckingAccount CA;
            CA.getAccountInfo();
            CA.checkOverdraftLimit();

            while (userChoice != 0)
            {
                cout << "----- Menu -----" << endl
                     << "1. Deposit" << endl
                     << "2. Withdraw" << endl
                     << "3. Show Balance" << endl
                     << "4. Show Account Info" << endl
                     << "5. Set Overdraft Limit" << endl
                     << "0. Exit" << endl
                     << "Enter your choice: ";
                cin >> userChoice;

                switch (userChoice)
                {
                case 1:
                    CA.deposit();
                    break;
                case 2:
                    CA.withdraw();
                    break;
                case 3:
                    CA.getBalance();
                    break;
                case 4:
                    CA.displayAccountInfo();
                    break;
                case 5:
                    CA.checkOverdraftLimit();
                    break;
                case 0:
                    cout << "Thank you visit again!..." << endl;
                    break;

                default:
                    cout << "Invalid choice" << endl;
                }
            }
        }

        else if (choice == 3)
        {
            FixedDepositAccount FA;

            while (userChoice != 0)
            {
                cout << "----- Menu -----" << endl
                     << "1. Deposit" << endl
                     << "2. Withdraw" << endl
                     << "3. Show Balance" << endl
                     << "4. Show Account Info" << endl
                     << "5. F.D. Calculate Interest" << endl
                     << "0. Exit" << endl
                     << "Enter your choice: ";
                cin >> userChoice;

                switch (userChoice)
                {
                case 1:
                    FA.deposit();
                    break;
                case 2:
                    FA.withdraw();
                    break;
                case 3:
                    FA.getBalance();
                    break;
                case 4:
                    FA.displayAccountInfo();
                    break;
                case 5:
                    FA.calculatelnterest();
                    break;
                case 0:
                    cout << "Thank you visit again!..." << endl;
                    break;

                default:
                    cout << "Invalid choice" << endl;
                }
            }
        }
    } while (choice != 0);
}