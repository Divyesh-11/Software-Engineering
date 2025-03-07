#include <stdio.h>
void division();
int main()
{
    division();
    return 0;
}
void division()
{
    int num1, num2;
    printf("\nUSer enter the num1 value = ");
    scanf("%d", &num1);
    printf("\nUSer enter the num2 value = ");
    scanf("%d", &num2);
    printf("\nThe two number division = %.2f", (float)num1 / (float)num2);
}