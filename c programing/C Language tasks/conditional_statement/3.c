#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("\nEnter the num1 value = ");
    scanf("%d", &num1);

    printf("\nEnter the num2 value = ");
    scanf("%d", &num2);

    printf("\nEnter the num3 value = ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\n%d is biggest number.", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\n%d is biggest number.", num2);
    }
    else
    {
        printf("\n%d is biggest number.", num3);
    }

    return 0;
}