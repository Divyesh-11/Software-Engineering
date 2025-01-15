#include <stdio.h>

int main()
{
    int a[10];
    printf("\nUSer enter the first element = ");
    scanf("%d", &a[0]);
    printf("\nUSer enter the second element = ");
    scanf("%d", &a[1]);
    printf("\nUser enter the third element = ");
    scanf("%d", &a[2]);

    printf("\nFirst element value  = %d", a[0]);
    printf("\nSecond element value = %d", a[1]);
    printf("\nThird element value  = %d", a[2]);
    return 0;
}