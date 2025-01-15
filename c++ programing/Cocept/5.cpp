#include<iostream>

using namespace std;
class shape
{
    public :
            virtual void display()
            {
                cout<<"\nWelcome two shape class.";
            }
};
class circel : public shape
{
    public :
            void display()
            {
                cout<<"\nWelcome two circle class.";
            }
};
class squre : public shape
{
    public :
             void display()
             {
                cout<<"\nWelcomr two square class.";
             }
};
int main(){
    
    shape s;
    s.display();
    circel c;
    c.display();
    squre s1;
    s1.display();
    return 0;
}