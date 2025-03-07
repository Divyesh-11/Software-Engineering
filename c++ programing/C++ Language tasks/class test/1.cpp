/*Write a c++ program take a number of user and swaping the value not used third variable.*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "\nEnter the a value = ";
    cin >> a;

    cout << "\nEnter the b value = ";
    cin >> b;

    cout << "\nThe originl value = " << a;
    cout << "\nThe original value = " << b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nThe value of using a swaping a = " << a;
    cout << "\nThe value of using a swaping b = " << b;

    return 0;
}