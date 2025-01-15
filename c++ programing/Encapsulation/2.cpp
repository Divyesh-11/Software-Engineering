// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include <iostream>

using namespace std;
class person
{
private:
    string country, name;
    int age;

public:
    void set()
    {
        string name, country;
        int age;

        cout << "\nEnter the country of person = ";
        cin >> country;
        cout << "\nEnter the name of person = ";
        cin >> name;
        cout << "\nEnter the age of person = ";
        cin >> age;

        this->country = country;
        this->name = name;
        this->age = age;
    }
    void get()
    {
        cout << "\nThe country of person = " << country;
        cout << "\nThe name of person = " << name;
        cout << "\nThe age of person = " << age << endl;
    }
};
int main()
{

    person p1, p2;
    p1.set();
    p2.set();
    p1.get();
    p2.get();
    return 0;
}