#include<iostream>

using namespace std;
class Demo
{
    public : 
            Demo()
            {
                cout<<"\nObject created.";
            }
            ~Demo()
            {
                cout<<"\nObject destroyed.";
            }
};
int main(){

    Demo d;
    cout<<"\nif Condition is start.";
    if (1)
    {
        static Demo d2;
    }
    cout<<"\nif Condition is ended.";
    
    return 0;
}