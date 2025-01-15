#include<iostream>

using namespace std;
void disply(int num)
{
    if (num != 0)
    {
        cout<<"\nHello divyesh.";
        disply(num-1);
    }
}
int main(){
    int num;

    cout<<"\nEnter the num value = ";
    cin>>num;
    disply(num);
    return 0;
}