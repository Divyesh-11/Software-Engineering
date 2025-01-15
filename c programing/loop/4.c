#include <stdio.h>

int main()
{
    int i, fact = 1, num;

    printf("\nUser enter num value = ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        fact *= i;
    }
    printf("\nFactorial of %d is %d ", num, fact);
    return 0;
}