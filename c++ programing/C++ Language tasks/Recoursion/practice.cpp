#include<iostream>

using namespace std;
void sumarr(int a[],int size)
{
    if (size>0)
    {
        return a[size - 1] + sumarr(a,size -1);
    }
    else
    {
        return 0;
    }
    
}
int main(){
    int a[100],size,i;

    cout<<"\nEnter the size of an array = ";
    cin>>size;

    for ( i = 0; i < size; i++)
    {
        cout<<"\nEnter the element of a array a["<<i<<"] = ";
        cin>>a[i];
    }
    int ans = sumarr(a,size);

    return 0;
}