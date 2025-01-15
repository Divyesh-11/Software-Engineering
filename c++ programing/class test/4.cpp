/*wrirte a c++ program to take aumber from the user and display this pattern 
       *
      * *
     * * *
    * * * *
   * * * * *
*/
#include<iostream>

using namespace std;

int main(){
    int row,i,j,k,spc;

    cout<<"\nEnter the row number = ";
    cin>>row;

    spc = row-1;
    for ( i = 1; i <= row; i++)
    {
        
        for (j = spc; j >= 1; j--)
        {
            cout<<" ";
        }
        for (k = 1 ; k <= i; k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        spc--;       
        
    }
    

    return 0;
}