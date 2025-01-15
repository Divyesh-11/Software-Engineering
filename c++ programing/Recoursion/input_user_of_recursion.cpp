#include<iostream>

using namespace std;
void p(int arr[],int size,int i)
{
    if (i<size)
    {
        cout<<"\nEnter the element of an arr["<<i<<"] = ";
        cin>>arr[i];

        p(arr,size,i + 1);
    }
    
}
int main(){
    int arr[100],size;   

    cout<<"\nEnter the size of an array = ";
    cin>>size;

    p(arr,size,0);
    for ( int i = 0; i < size; i++)
    {
        cout<<"\nThe array value "<<arr[i] ;
    }
    
    return 0;
}