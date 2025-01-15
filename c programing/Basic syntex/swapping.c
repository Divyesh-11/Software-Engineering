#include <stdio.h>

int main()
{
    int a = 10, b = 15, c;

    printf("\nUsed third variable and wapping the value.");

    printf("\nBefore used swapping value = %d", a);
    printf("\nBefore used swapping value = %d", b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter used swapping value = %d", a);
    printf("\nAfter used swapping value = %d", b);

    printf("\n\nUsed addtion and subtraction and wapping value.");

    printf("\nBefore used swapping value = %d", a);
    printf("\nBefore used swapping value = %d", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter used swapping value = %d", a);
    printf("\nAfter used swapping value = %d", b);

    printf("\n\nUsed division and multiplication and wapping value.");

    printf("\nBefore used swapping value = %d", a);
    printf("\nBefore used swapping value = %d", b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("\nAfter used swapping value = %d", a);
    printf("\nAfter used swapping value = %d", b);
    return 0;
}
