
int sumarr(int arr[],int size)
{
    
    if (size>0)
    {
        return arr[size - 1] + sumarr(arr,size - 1);
    }
    else
    {
        return  0;
    }
    
}
int main(){
    int arr[100],size;

    cout<<"\nEnter the size of an array = ";
    cin>>size;

    for (int  i = 0; i < size; i++)
    {
        cout<<"\nEntert the element of an array arr["<<i<<"]= ";
        cin>>arr[i];
    }
    int ans = sumarr(arr,size);