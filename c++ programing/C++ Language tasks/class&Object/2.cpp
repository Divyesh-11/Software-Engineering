#include <iostream>

using namespace std;
class student
{
private:
    int roll;
    string name;
    double cgpa;

public:
    void set(int r, string n, double c)
    {

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

    int r;
    string n;
    double c;

    cout << "\nEnter the roll number of student = ";
    cin >> r;
    cout << "\nEnter the name of student = ";
    cin >> n;
    cout << "\nEnter the cgpa of student = ";
    cin >> c;

    s1.set(r, n, c);
    s1.get();
    return 0;
}