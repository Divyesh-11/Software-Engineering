#include <stdio.h>

int main()
{
    int num;
start:
    printf("\nUser enter the num value = ");
    scanf("%d", &num);
    printf("\nUser entered value = %d", num);
    if (num == -1)
    {
        goto end;
    }
    goto start;
end:
    return 0;
}