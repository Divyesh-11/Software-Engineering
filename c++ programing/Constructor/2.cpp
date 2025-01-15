#include <iostream>

using namespace std;
class student
{
private:
    int id;
    string name;

public:
    student(int i, string n)
    {
        id = i;
        name = n;
    }
    void disply()
    {
        cout << "\nThe student Id = " << id;
        cout << "\nThe student name = " << name;
    }
};
int main()
{

    student s1(101, "divyesh");
    s1.disply();
    student s2(102, "rohan");
    s2.disply();

    return 0;
}