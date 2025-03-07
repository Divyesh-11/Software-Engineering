#include <iostream>

using namespace std;

int main()
{
    int row, i, j;

    printf("\nUser enter the row value = ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        int temp = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", temp++);
        }
        printf("\n");
    }

    return 0;
}