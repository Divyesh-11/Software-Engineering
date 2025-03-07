#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("\nUser enter the num value = ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("\n%d is an perfact number.", num);
    }
    else
    {
        printf("\n%d is not an perfact number.", num);
    }

    return 0;
}