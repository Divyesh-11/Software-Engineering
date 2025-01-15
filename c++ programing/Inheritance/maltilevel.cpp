#include<iostream>

using namespace std;
class grandperent
{
    public : 
        void grndperent()
        {
            cout<<"\nHello this is a grandperent class.";
        }
};
class perent : public grandperent
{
    public : 
        void father()
        {
            cout<<"\nHello this is a perent class.";
        }
};
class child : public perent
{
    public : 
        void chld()
        {
            cout<<"\nHello this is a child class.";
        }
};
class grandchild : public child
{

};
int main(){

    grandperent g1;
    g1.grndperent();
    perent p1;
    p1.grndperent();
    p1.father();
    child c1;
    c1.grndperent();
    c1.father();
    c1.chld();
    grandchild gc1;
    gc1.grndperent();
    gc1.father();
    gc1.chld();
    
    return 0;
}