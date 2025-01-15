#include<iostream>

using namespace std;
class perent
{
    public : 
        void Display()
        {
            cout<<"\nHello perent class called";
        }
};
class Child :public perent
{
    // public : 
    //     void Display()
    //     {
    //         cout<<"\nHello child class called";
    //     }
};
int main(){

    // perent P1,P2;
    // P1.Display();
    // P2.Display();
    Child c1,c2;
    c1.Display();
    c1.Display();
    c2.Display();
    c2.Display();    
    return 0;
}