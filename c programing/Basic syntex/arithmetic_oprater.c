#include<stdio.h>

int main(){
    int num1,num2;

    printf("\nUser enter the num1 value = ");
    scanf("%d",&num1);
    printf("\nUser enter the num2 value = ");
    scanf("%d",&num2);

    printf("\nTwo numbers addtion value = %d",num1+num2);
    printf("\nTwo numbers subtraction value = %d",num1-num2);
    printf("\nTwo numbers multiplication value = %d",num1*num2);
    printf("\nTwo numbers division value = %f",(float)num1/(float)num2);
    return 0;
}