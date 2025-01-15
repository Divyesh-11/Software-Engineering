#include <iostream>
using namespace std;
class shape
{
public:
    void diplay(int s)
    {
        cout << "\nThe area of squer = " << s * s;
    }
    void diplay(double a)
    {
        cout << "\nThe area of circel = " << 3.14 * (a * a);
    }
    void diplay(int l, int b)
    {
        cout << "\nThe area of rantangle = " << l * b;
    }
    void display(double b, double h)
    {
        cout << "\n The area of traingle = " << 3.14 * (b * h);
    }
};
int main()
{
    shape s1, s2, s3, s4;
    s1.diplay(10);
    s2.diplay(12.0);
    s3.display(12, 15);
    s4.display(15.0, 12.0);

    return 0;
}