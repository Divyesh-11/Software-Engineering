/*Write a c++ program to shoow case multiple inheritance.*/
#include <iostream>

using namespace std;
class perent
{
public:
    void Display()
    {
        cout << "\nWelcome two Perent class.";
    }
};
class mother
{
public:
    void Disply()
    {
        cout << "\nWelcomr two mother class.";
    }
};
class child : public perent, public mother
{
};
int main()
{

    child c1;

    c1.Display();
    c1.Disply();
    return 0;
}