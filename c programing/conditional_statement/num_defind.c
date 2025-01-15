#include <stdio.h>

int main()
{
    int num;

    printf("\nUser enter the num value = ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\nUser entered value is positive number.");
    }
    else if (num < 0)
    {
        printf("\nUser entered value is negetive number.");
    }
    else
    {
        printf("\nUser entered value is special charactor.");
    }

    return 0;
}