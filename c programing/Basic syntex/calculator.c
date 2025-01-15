#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, power, sq;
    char choice;

    printf("\n'+' ---> Addtion");
    printf("\n'-' ---> Subtraction");
    printf("\n'*' ---> Multiplication");
    printf("\n'/' ---> Division");
    printf("\n'r' ---> Rimender");
    printf("\n's' ---> squre");
    printf("\n'2' ---> Squreroot");
    printf("\n'c' ---> Cube");
    printf("\n'p' ---> Power");

    printf("\nUser enter your choice = ");
    scanf("%c", &choice);

    switch (choice)
    {
    case '+':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nEnter the num2 value = ");
        scanf("%d", &num2);
        printf("\nTwo numbers addtion value = %d", num1 + num2);
        break;
    case '-':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nEnter the num2 value = ");
        scanf("%d", &num2);
        printf("\nTwo numbers subtraction value = %d", num1 - num2);
        break;
    case '*':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nEnter the num2 value = ");
        scanf("%d", &num2);
        printf("\nTwo numbers multiplication value = %d", num1 * num2);
        break;
    case '/':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nEnter the num2 value = ");
        scanf("%d", &num2);
        printf("\nTwo numbers division value = %.2f", (float)num1 / (float)num2);
        break;
    case 'r':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nEnter the num2 value = ");
        scanf("%d", &num2);
        printf("\nTwo numbers reminder value = %d", num1 % num2);
        break;
    case 's':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nSqure value = %d", num1 * num1);
        break;
    case '2':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        sq = sqrt(num1);
        printf("\nSqureroot value = %d", num1);
        break;
    case 'c':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nCube value = %d", num1 * num1 * num1);
        break;
    case 'p':
        printf("\nEnter the num1 value = ");
        scanf("%d", &num1);
        printf("\nEnter the num2 value = ");
        scanf("%d", &num2);
        power = pow(num1, num2);
        printf("\nPower value = %d", power);
        break;

    default:
        printf("\nYpur choice invaild !");
        break;
    }

    return 0;
}