/*write a c++ prgram to take size and element from the user and print an array in ascending order.*/
#include<iostream>

using namespace std;

int main(){
    int size,a[100],b[100],i,temp;

    cout<<"\nEnter the size of an array = ";
    cin>>size;

    for ( i = 0; i < size; i++)
    {
        cout<<"\nEnter the element of an array a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\n";
    for ( i = 0; i < size; i++)
    {
        cout<<"\nEnter the element of an array b["<<i<<"] = ";
        cin>>b[i];
    }
    
    for ( i = 0; i < size; i++)
    {
        if (a[i]<b[i])
        {
            temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }    
    }
    
    cout<<"\nThe acsending value = ";
    for ( i = 0; i < size; i++)
    {
        cout<<b[i]<<" "<<a[i]<<" ";
    }
    
    return 0;
}