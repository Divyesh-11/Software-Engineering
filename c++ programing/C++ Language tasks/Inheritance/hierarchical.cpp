#include<iostream>

using namespace std;
class perent
{
    public : 
        void p()
        {
            cout<<"\nWelcome this is a perent class called.";
        }

};
class brother : public perent {
    
};
class sister : public perent
{

};
int main(){
    
    brother b1;
    sister s1;
    b1.p();
    s1.p();
    return 0;
}