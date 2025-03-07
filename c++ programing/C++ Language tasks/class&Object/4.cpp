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
        int roll;
        string name;
        double cgpa;

        cout << "\nEnter the student roll number = ";
        cin >> roll;
        cout << "\nEnter the student name = ";
        cin >> name;
        cout << "\nEnter the student cgpa = ";
        cin >> cgpa;

        this->roll = roll;
        this->name = name;
        this->cgpa = cgpa;
    }
    void get()
    {
        cout << "\nThe student roll number = " << roll;
        cout << "\nThe student name = " << name;
        cout << "\nThe student cgpa = " << cgpa << endl;
    }
};
int main()
{

    student s1, s2;
    s1.set();
    s2.set();
    s1.get();
    s2.get();
    return 0;
}