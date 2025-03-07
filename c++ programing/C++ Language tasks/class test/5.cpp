/*Write a c++ program to take a number frome the user and find its factorial using recursion.*/
#include<iostream>

using namespace std;
int factorial(int num)
{
    if (num != 0)
    {
        return num * factorial(num-1);
    }
    else
    {
        return 1;
    }
    
}
int main(){
    int num;

    cout<<"\nEnter the num value = ";
    cin>>num;
    int ans = factorial(num);

    cout<<"\nThe factorial of "<<num<<" is "<<ans;
    return 0;
}