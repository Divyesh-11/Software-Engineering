#include <stdio.h>

int main()
{
    int choice;

    printf("\nUser enter your choice (1-7) = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nMonday");
        break;
    case 2:
        printf("\nTeusday");
        break;
    case 3:
        printf("\nWendnesday");
        break;
    case 4:
        printf("\nThursday");
        break;
    case 5:
        printf("\nFriday");
        break;
    case 6:
        printf("\nSaturday");
        break;
    case 7:
        printf("\nSunday");
        break;
    default:
        printf("\nUeser your entered value is not vaild.");
        break;
    }
    return 0;
}