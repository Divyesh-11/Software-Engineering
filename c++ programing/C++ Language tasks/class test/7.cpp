/*write a c++ program todemonstrate the use of constructor and destructor.*/
#include<iostream>

using namespace std;
class Demo
{
     public :
        Demo()
        {
            cout<<"\nCounstructor created.";
        }
        ~Demo()
        {
            cout<<"\nCounstrutor destroed.";
        }
};
int main(){
    
    Demo d1;
    return 0;
}