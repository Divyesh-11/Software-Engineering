#include <stdio.h>

int main()
{
    int row, colm;

    printf("\nUser enter the row value = ");
    scanf("%d", &row);
    printf("\nUser enter the colum value = ");
    scanf("%d", &colm);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}