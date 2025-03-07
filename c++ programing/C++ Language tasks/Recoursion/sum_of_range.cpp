 #include<iostream>
 
 using namespace std;
 int sum(int range)
 {
    if (range != 0)
    {
        return range + sum(range - 1);
    }
    else
    {
        return 0;
    }
    
 }
 int main(){
    int range,ans;

    cout<<"\nEnter the num value to find range for all number = ";
    cin>>range;

    ans = sum(range);

    cout<<"\nAddition of all number = "<<ans; 
    return 0;
 }