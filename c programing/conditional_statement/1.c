#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the num value = ");
    scanf("%d",&num);
    if (num<18)
    {
        printf("\nYou are not eligible for vote.");
    }
    else
    {
        printf("\nYou are eligible for vote.");
    }
    
    return 0;
}