/*write a c++ program whether the year is a leap year or not */
#include<iostream>

using namespace std;

int main(){
    int year;

    cout<<"\nEnter the year to find the year is leap or not = ";
    cin>>year;

    if (year%4 == 0)
    {
        cout<<"\nYour Enter year is leap year.";
    }
    else
    {
        cout<<"\nYour Enter year is not leap year.";
    }
    
    return 0;
}