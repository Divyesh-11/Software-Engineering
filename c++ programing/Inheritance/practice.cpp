#include<iostream>
//hybrid inheritance
using namespace std;
class grandperent {
    public:
            void gp(){
                cout<<"\nWelcome to grandperent class.";
            }
};
class perent : public grandperent{
    public :
            void p()
            {
                cout<<"\nWelcome to perent class.";
            }
};
class Uncle : public grandperent{
    public :
             void U()
             {
                cout<<"\nWelcome to Uncle class.";
             }
};
class sister : public Uncle {

};
class broher : public perent {

};
int main(){

    sister s1;
    s1.gp();
    s1.U();
    broher b1;
    b1.gp();
    b1.p();

    return 0;
}
