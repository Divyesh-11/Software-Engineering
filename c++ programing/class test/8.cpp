/*write a c+ program to create a class called 'Student' and seclare private deta members for id,name and cgpa implement set and get member function.*/
#include<iostream>

using namespace std;
class Student {
    private :
        int id;
        string name;
        double cgpa;
    public :
        void set()
        {
            int id;
            string name;
            double cgpa;

            cout<<"\nEnter the id of student = ";
            cin>>id;

            cout<<"\nEnter the name of Student = ";
            cin>>name;

            cout<<"\nEnter the cgpa of Student = ";
            cin>>cgpa;


            this->id = id;
            this->name = name;
            this->cgpa = cgpa;

        }
        void get()
        {
            cout<<"\nThe Student id number = "<<id;
            cout<<"\nThe Student name = "<<name;
            cout<<"\nThe Student cgpa = "<<cgpa<<endl;
        }
};
int main(){
    
    Student s1,s2;

    s1.set();
    s2.set();
    s1.get();
    s2.get();
    return 0;
}