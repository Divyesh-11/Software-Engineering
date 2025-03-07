/*Write a c++ program to read a data frome the file.*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    
    ofstream Myfile("first.txt");
    Myfile<<"\nThis file is my first file.";
    Myfile<<"\nTis file is created.";
    Myfile.close();

    ifstream Myfile("first.txt");
    while (getline(first,text))
    {
        /* code */
    }
    
    return 0;
}