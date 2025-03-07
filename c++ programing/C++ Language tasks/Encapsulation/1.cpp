// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include <iostream>

using namespace std;
class Circle
{
private:
    double radias;

public:
    void set()
    {
        double radias;
        cout << "\nEnter the redias value = ";
        cin >> radias;
        this->radias = radias;
    }
    void area()
    {
        cout << "\nThe area of circle = " << 3.14 * (radias * radias);
    }
    void circumference()
    {
        cout << "\nThe area of circumference = " << 2 * (3.14 * radias);
    }
};
int main()
{

    Circle c;
    c.set();
    c.area();
    c.circumference();
    return 0;
}