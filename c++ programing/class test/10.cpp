/*Write a c++ program to show case Function overloading.*/
#include <iostream>

using namespace std;
class Demo
{
public:
    void shape(int num)
    {
        cout << "\nThe square of number = " << num * num;
    }
    void shape(double num)
    {
        cout << "\nThe cude of numbers = " << num * num * num;
    }
    void shape(int langth, int beth)
    {
        cout << "\nThe area rantengle = " << langth * beth;
    }
};
int main()
{

    Demo d1;

    d1.shape(2.0);
    d1.shape(5);
    d1.shape(15, 5);

    return 0;
}