#include<iostream>

using namespace std;
class grandperent 
{
    public :
        void gp()
        {
            cout<<"\nThis is a grandperent class called.";
        }

};
class Father
{
    public : 
        void f()
        {
            cout<<"\nThis is a father class called.";
        }

};
class Uncle
{
    public :
        void U()
        {
            cout<<"\nThis is a Uncle class called.";
        }

};
class cousin : public Uncle
{

};
class son : public Father
{

};
int main(){
    cousin c1;
    c1.U();
    son s1;
    s1.f();
    return 0;
}