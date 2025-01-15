#include <iostream>

using namespace std;
class Demo
{
public:
    int n1;
    int n2;
    Demo()
    {
        n1 = 0;
        n2 = 0;
    }
    Demo(int n1, int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }
    void display()
    {
        cout << "\nThe value of n1 = " << n1;
        cout << "\nThe value of n2 = " << n2;
    }
    Demo operator+(Demo &obj)
    {
        Demo temp;
        temp.n1 = this->n1 + obj.n1;
        temp.n2 = this->n2 + obj.n2;
        return temp;
    }
};
int main()
{
    Demo d1;
    cout << "\nFirst object value.";
    d1.display();
    Demo d2(15, 25);
    cout << "\nSecond object value.";
    d2.display();

    Demo d3 = d1 + d2;
    cout << "\nThird object value.";
    d3.display();

    Demo d4 = d2 + d3;
    cout << "\nFourth object value.";
    d4.display();

    Demo d5 = d4 + d3;
    cout << "\nFiveth object value.";
    d5.display();

    return 0;
}