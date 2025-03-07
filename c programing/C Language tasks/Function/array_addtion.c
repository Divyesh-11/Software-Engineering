#include <stdio.h>
int addtion(int arr[], int size);
int main()
{
    int size, a[100], i;

    printf("\nUSer enter the size of an array = ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("\nUser enter the element of an array = ");
        scanf("%d", &a[i]);
    }
    int ans = addtion(a, size);
    printf("\nThe addtion of an array = %d", ans);

    return 0;
}

int addtion(int arr[], int size)
{
    int ans = 0, i;
    for (i = 0; i < size; i++)
    {
        ans += arr[i];
    }
    return ans;
}