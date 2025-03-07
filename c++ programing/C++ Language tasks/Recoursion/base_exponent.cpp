#include<iostream>
#include<cmath>

using namespace std;
int power(int base, int exponent)
{
    if (exponent != 0)
    {
        return base * power(base,exponent - 1);
    }
    else
    {
        return 1;
    }
    
}
int main(){
    int base,exponent;

    cout<<"\nEnter the base value = ";
    cin>>base;

    cout<<"\nEnter the exponent value = ";
    cin>>exponent;

    int ans = power(base,exponent);

    cout<<"\nThe power is = "<<ans;
    return 0;
}