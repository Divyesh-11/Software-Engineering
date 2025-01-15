#include <iostream>

using namespace std;
class student
{
private:
    int id;
    string name;
    double cgpa;

public:
    student(int i, string n, double c)
    {
        id = i;
        name = n;
        cgpa = c;
    }
    void display()
    {
        cout << "\nid is student = " << id;
        cout << "\nName is student = " << name;
        cout << "\nCgpa is student = " << cgpa;
    }
};
int main()
{

    student s1(101, "divyesh", 8.5);
    s1.display();
    student s2(s1);
    s2.display();

    return 0;
}