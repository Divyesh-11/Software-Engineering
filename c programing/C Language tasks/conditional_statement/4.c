#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("\nUser Enter the num1 value = ");
    scanf("%d", &num1);
    printf("\nUser enter the num2 value = ");
    scanf("%d", &num2);
    printf("\nUser enter the num3 value = ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\n%d is biggest number.", num1);
        }
        else
        {
            printf("\n%d is biggest number.", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("\n%d is biggest number.", num2);
        }
        else
        {
            printf("\n%d is biggest number.", num3);
        }
    }

    return 0;
}