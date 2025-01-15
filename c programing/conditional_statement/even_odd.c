#include <stdio.h>

int main()
{
    int num;

    printf("\nUser enter num value = ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\nentered number is even number.");
    }
    else
    {
        printf("\nEntered number is odd number.");
    }

    return 0;
}