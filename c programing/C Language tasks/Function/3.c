#include <stdio.h>
void multiplication(int num1, int num2);
int main()
{

    int num1, num2;
    printf("\nUser enter the num1 value = ");
    scanf("%d", &num1);
    printf("\nUser enter the num2 value = ");
    scanf("%d", &num2);
    multiplication(num1, num2);
    return 0;
}
void multiplication(int num1, int num2)
{
    printf("\nThe two numbers multiplication = %d", num1 * num2);
}