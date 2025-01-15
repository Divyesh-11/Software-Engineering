#include <iostream>

using namespace std;
class student
{
public:
    int roll;
    string name;
    double cgpa;
    void display()
    {
        cout << "\nHello world !";
    }
};
int main()
{

    student s1;
    s1.roll = 101;
    s1.name = "Divyesh";
    s1.cgpa = 8.5;

    cout << "\nThe student roll number = " << s1.roll;
    cout << "\nThe student name = " << s1.name;
    cout << "\nThe student cgpa = " << s1.cgpa;
    s1.display();

    return 0;
}