// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string Account_number;
    double balance;

public:
    BankAccount() : balance(0.0) {} // Constructor to initialize account

    void setAccountdeatils() // Function to set account details
    {
        string a;
        double b;

        cout << "\nEnter the your account number = ";
        cin >> a;

        cout << "\nEnter the your account balance = ";
        cin >> b;

        if (balance < 0)
        {
            cout << "Balance cannot be negative. Setting balance to 0." << endl;
            balance = 0.0;
        }

        Account_number = a;
        balance = b;
    }

    void diposit() // Function to deposit money
    {
        double amount;
        cout << "\nEnter the diposite amount = ";
        cin >> amount;

        if (amount < 0)
        {
            cout << "Deposit amount cannot be negative." << endl;
            return;
        }

        balance += amount;

        cout << "\nYour avilable balance = " << balance;
    }

    void withdrow() // Function to withdraw money
    {
        double amount;
        cout << "\nEnter the Withdrawal amount = ";
        cin >> amount;

        if (amount < 0)
        {
            cout << "Withdrawal amount cannot be negative." << endl;
            return;
        }

        if (amount < balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "\nEntered balance is not avilable in bank account.";
        }
    }

    void displayDetails() const // Function to display account details
    {
        cout << "\nAccount Number: " << Account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{

    BankAccount account;

    account.setAccountdeatils();
    account.displayDetails();
    account.diposit();
    account.withdrow();
    account.displayDetails();

    return 0;
}