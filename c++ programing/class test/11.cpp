/*write a c++ program to show case a use of friend function.*/
#include <iostream>

using namespace std;
class Demo
{
private:
    int age;
    string name;

public:
    void set()
    {
        int age;
        string name;

        cout << "\nEnter the age of person = ";
        cin >> age;

        cout << "\nEnter the name of person = ";
        cin >> name;

        this->age = age;
        this->name = name;
    }
    friend void display(Demo &obj);
};
void display(Demo &obj)
{
    cout << "\nThe age of person = " << obj.age;
    cout << "\nThe name of person = " << obj.name;
}
int main()
{

    Demo d1;
    d1.set();
    display(d1);

    return 0;
}