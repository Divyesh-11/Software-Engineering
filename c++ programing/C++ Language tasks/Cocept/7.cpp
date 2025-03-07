#include<iostream>

using namespace std;
void display(){

    static int  a=10;
    a++;
    cout<<"\n"<<a;
}
int main(){
    display();
    display();
    display();
    return 0;
}