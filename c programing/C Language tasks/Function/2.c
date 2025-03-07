#include <stdio.h>
int sub();

int main()
{

    int ans = sub();
    printf("\nThe two numbers subtraction = %d", ans);

    return 0;
}
int sub()
{
    int num1, num2;
    printf("\nUSer enter the num1 value = ");
    scanf("%d", &num1);
    printf("\nUSer enter the num2 value = ");
    scanf("%d", &num2);

    return num1 - num2;
}