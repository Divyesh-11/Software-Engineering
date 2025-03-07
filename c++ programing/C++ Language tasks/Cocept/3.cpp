#include <iostream>

using namespace std;
class demo
{
private:
    int age = 21;
    string name = "divyesh";

public:
    friend void display(demo &obj);
};
void display(demo &obj)
{
    cout << "\nThe person age = " << obj.age;
    cout << "\nThe person name = " << obj.name;
}
int main()
{

    demo d1;
    display(d1);

    return 0;
}