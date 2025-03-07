#include <iostream>

using namespace std;
class perent
{
public:
    void p()
    {
        cout << "\nWelcome the perent class.";
    }
};

class child : public perent
{
public:
    void p()
    {
        cout << "\nWelcome the child class.";
    }
};

class grandchild : public child
{
public:
    void p()
    {
        cout << "\nWelcome the grandchild class.";
    }
};
int main()
{

    grandchild g1;
    g1.p();

    return 0;
}