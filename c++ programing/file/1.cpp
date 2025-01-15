#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream Myfile("first.txt");
    Myfile<<"\nHello world ! ";
    Myfile<<"\nThis is my first file in c++ language.";
    Myfile<<"\nc++ language is object orianted proggraming language.";
    Myfile<<"\nc++ language is advance version of c language.";
    Myfile.close();
    cout<<"\nOperation is successful.!";
    return 0;
}