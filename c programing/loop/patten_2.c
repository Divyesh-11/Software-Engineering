#include <stdio.h>

int main()
{
    int row, colm, i, j;

    printf("\nUser enter the row value = ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}