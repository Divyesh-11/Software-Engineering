#include<stdio.h>

int main(){
    int start,end,i;

    printf("\nUser enter the starting value = ");
    scanf("%d",&start);
    printf("\nUser enter the ending value = ");
    scanf("%d",&end);

    for ( i = start; i <= end; i++)
    {
        printf("\n*****************\n\t%d",i);
    }
    
    return 0;
}