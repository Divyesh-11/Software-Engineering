#include <stdio.h>

int main()
{
    int num, fact = 1, rem, sum = 0;

    printf("\nUser enter the num value = ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0)
    {
        rem = num % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum = sum + fact;
        num /= 10;
    }
    if (temp == sum)
    {
        printf("\n%d is an strong number.", temp);
    }
    else
    {
        printf("\n%d is not an strong number.", temp);
    }
    return 0;
}