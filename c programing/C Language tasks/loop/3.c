#include <stdio.h>

int main()
{
    int i, start, end;

    printf("\nUser enter the starting value = ");
    scanf("%d", &start);
    printf("\nUSer enter the ending value = ");
    scanf("%d", &end);

    if (start > end)
    {
        for (i = start; i >= end; i--)
        {
            printf("\n***************\n\t%d", i);
        }
    }
    else
    {
        for (i = start; i <= end; i++)
        {
            printf("\n***************\n\t%d", i);
        }
    }

    return 0;
}