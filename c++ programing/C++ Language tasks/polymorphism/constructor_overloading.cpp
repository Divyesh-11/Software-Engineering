#include <iostream>

using namespace std;
class shape
{
public:
    shape() {}

    shape(int a)
    {
        cout << "\nArea of squre = " << a * a;
    }
    shape(double d)
    {
        cout << "\nThe cude of d = " << d * d * d;
    }
    shape(int l, int d)
    {
        cout << "\nThe area of Rantengle = " << l * d;
    }
};
int main()
{

    shape s1;
    shape s2(5);
    shape s3(15.00);
    shape s4(5, 6);

    return 0;
}