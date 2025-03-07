#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, digit = 0, sum = 0, power;

    printf("\nUser enter the num value = ");
    scanf("%d", &num);
    int temp = num;
    int copy = num;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    for (i = 1; i <= digit; i++)
    {
        int rem = temp % 10;
        power = pow(rem, digit);
        sum += power;
        temp /= 10;
    }
    if (sum == copy)
    {
        printf("\n%d is an armstrong number.", copy);
    }
    else
    {
        printf("\n%d is not an armstrong number.", copy);
    }

    return 0;
}