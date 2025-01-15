#include<stdio.h>

int main(){
    int row,colum,i,j;

    printf("\nUser enter the row value = ");
    scanf("%d",&row);

    // printf("\nUser enter the column value = ");
    // scanf("%d",&colum);
    int spc = row-1;
    for ( i = 1; i <= row; i++)
    {
        for (j = spc; j>= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k<= i; k++)
        {
            printf("* ");
        }
        printf("\n");
        spc--;
    }
    
    return 0;
}