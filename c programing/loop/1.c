#include <stdio.h>

int main()
{
    int i;
    printf("\n**********For loop**********");
    for (i = 1; i <= 5; i++)
    {
        printf("\nTops Tecnologies.");
    }
    printf("\n**********while loop**********");
    i = 1;
    while (i <= 5)
    {
        printf("\nTops Tecnologies.");
        i++;
    }
    printf("\n**********do while loop**********");
    i = 1;
    do
    {
        printf("\nTops Tecnoogies.");
        i++;
    } while (i <= 5);

    return 0;
}