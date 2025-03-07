/*Write a c++ program to take a number from user and cheak wheter itd a prime or not.*/
#include <iostream>

using namespace std;

int main()
{
    int num, count = 0, i;

    cout << "\nEnter the num value = ";
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << "\nThis number is an prime number.";
    }
    else
    {
        cout << "\nThis number is not an prime number.";
    }
    return 0;
}