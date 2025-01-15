#include <iostream>

using namespace std;
class student
{
private:
    int roll;
    string name;
    double cgpa;

public:
    void set()
    {
        int r;
        string n;
        double c;
        cout << "\nEnter the student roll number = ";
        cin >> r;
        cout << "\nEnter the student name = ";
        cin >> n;
        cout << "\nEnter the student cgpa = ";
        cin >> c;
        roll = r;
        name = n;
        cgpa = c;
    }
    void get()
    {
        cout << "\nThe student roll number = " << roll;
        cout << "\nThe student name = " << name;
        cout << "\nThe student cgpa = " << cgpa;
    }
};
int main()
{

    student s1;
    s1.set();
    s1.get();
    return 0;
}