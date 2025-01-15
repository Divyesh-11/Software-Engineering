#include <stdio.h>

int main()
{
    char ch;

    printf("\nUser enter you charactor choice = ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\nYour charector choice is vowel.");
    }
    else
    {
        printf("\nYour charector choice is consonant.");
    }

    return 0;
}