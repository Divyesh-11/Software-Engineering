#include<iostream>

using namespace std;
class perent
{
    protected :
        int totalamount;
    public :
        void settotalamount(){
            cout<<"\nEnter the total amount of perent class := ";
            cin>>totalamount;
        }
        void showtotalamount(){
            cout<<"\nPerent class : Total amount = "<<totalamount <<"Rs"<<endl;
        }

        int totalamount(){
            return totalamount;
        }

};
class mother : public perent{

    protected :
        int motheramount;
    public :
        void calculateamount(){
            cout<<"\nMother class : Accessible Amount = ";
        }
};
class child : public mother {

};
class daugohter : public mother {

};
int main(){
    mother m1;
    return 0;
}