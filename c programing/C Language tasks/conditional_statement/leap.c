#include <stdio.h>

int main()
{
    int year;

    printf("\nEnter the year to find leap or not leap = ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("\nUser entered year is an leap year.");
    }
    else
    {
        printf("\nUser entered year is not an leap year.");
    }
    printf("\n**************************************\nUsed ternory opretor.");
    year % 4 == 0 ? printf("\nEntered year is an leap year.") : printf("\nEntered year is not an leap year.");
    return 0;
}