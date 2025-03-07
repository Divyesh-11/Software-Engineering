#include <stdio.h>

int main()
{
    int size, a[10], i;

    printf("\nUSer enter the size of an array = ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the element of an array = ");
        scanf("%d", &a[i]);
    }
    printf("\nUSer entered element value := ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}