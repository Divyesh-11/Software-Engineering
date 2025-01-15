#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string text;
    ifstream Myfile("first.txt");
    while (getline(Myfile,text))
    {
        cout<<text<<endl;
    }
    Myfile.close();
    return 0;
}