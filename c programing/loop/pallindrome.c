#include <stdio.h>

int main()
{
    int num, rev = 0, rem;
    printf("\nUser enter the num value = ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    if (rev == temp)
    {
        printf("\n%d is an pallindrome number.", temp);
    }
    else
    {
        printf("\n%d is not an pallindrome number.", temp);
    }

    return 0;
}