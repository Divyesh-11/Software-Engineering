#include<iostream>

using namespace std;
class perent // base class
{
    private :
        int n1 = 15;
        string s1 = "private";
    protected :
        int n2 = 12;
        string s2 = "protected";
    public : 
        int n3 = 11;
        string s3 = "public";

    public :
        void disply()
        {
            cout<<"\nThe private n1 value = "<<n1;
            cout<<"\nThe private string-1 value = "<<s1<<endl;
        }
};
class child /*dirrved class */: public perent
{
    public :
        void display()
        {
            cout<<"\nThe protected n2 value = "<<n2;
            cout<<"\nThe protected strigng-2 value = "<<s2;
            cout<<"\n";
            cout<<"\nThe public n3 value = "<<n3;
            cout<<"\nThe public string-3 value = "<<s3<<endl;
        }
};
int main(){

    perent p;
    p.disply();
    child c;
    c.display();
    
    
    return 0;
}