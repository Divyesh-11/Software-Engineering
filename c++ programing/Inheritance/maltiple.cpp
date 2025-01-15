#include<iostream>

using namespace std;
class  father
{
    public :
        void f()
        {
            cout<<"\nHello this is a father class called.";
        }

};
class mother
{
    public : 
        void m()
        {
            cout<<"\nHello this is a mother class called.";
        }

};
class child : public father,public mother
{

};
int main(){
    child c1;
    c1.f();
    c1.m();
    return 0;
}