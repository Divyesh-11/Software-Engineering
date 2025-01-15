#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\nEnter the num1 value = ");
    scanf("%d", &num1);

    printf("\nEnter the num2 value = ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\n%d is biggest number.", num1);
    }
    else if (num1 == num2)
    {
        printf("\nBoth number is same.");
    }
    else
    {
        printf("\n%d is biggest number.", num2);
    }
    return 0;
}