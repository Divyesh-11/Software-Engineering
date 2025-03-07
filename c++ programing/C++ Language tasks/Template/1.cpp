#include <iostream>

using namespace std;
template <typename T>
void swaping(T &n1, T &n2)
{
    T temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a = 10, b = 20;

    cout << "\nvalue of brfore swaping = " << a;
    cout << "\nVAlue of before swaping = " << b;
    swaping(a, b);
    cout << "\n";
    cout << "\nValue of after the swaping = " << a;
    cout << "\nValue of after the swaping = " << b;

    float x = 10.32, y = 15.55;

    cout << "\nValue of before swaping = " << x;
    cout << "\nValue of before swaping = " << y;

    swaping(x, y);
    cout << "\n";
    cout << "\nValue of after the swaping = " << x;
    cout << "\nValue of after the swaping = " << y;

    char p = 'A', q = 'B';

    cout << "\nValue of before swaping = " << p;
    cout << "\nValue of besore swaping = " << q;
    swaping(p, q);
    cout << "\n";
    cout << "\nValue of after the swaping = " << p;
    cout << "\nValue of after the swaping = " << q;

    string str1 = "divyesh", str2 = "bhaisahab";
    cout << "\n";
    cout << "\nThe Original string value = " << str1;
    cout << "\nThe Original string value = " << str2;
    swaping(str1, str2);
    cout << "\n";
    cout << "\nThe after swaping the string value = " << str1;
    cout << "\nThe after swaping the string value = " << str2;
    return 0;
}