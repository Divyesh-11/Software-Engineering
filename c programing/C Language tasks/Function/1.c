#include <stdio.h>
int add(int num1, int num2)
{
    return num1 + num2;
}
int main()
{

    int num1, num2, ans;

    printf("\nUser enter the num1 value = ");
    scanf("%d", &num1);
    printf("\nUser enter the num2 value = ");
    scanf("%d", &num2);
    ans = add(num1, num2);
    printf("\nThe two numbers addtion = %d", ans);

    return 0;
}