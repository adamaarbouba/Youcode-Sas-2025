#include <stdio.h>

int main()
{
    int num1,num2,num3;
    float sum;
    printf("Enter the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);
    printf("Enter the Third Number : ");
    scanf("%d", &num3);

    num1 = num1 * 2;
    num2 = num2 * 3;
    num3 = num3 * 5;
    sum = num1 + num2 + num3;
    printf("Your Avereg grade is : %.2f", sum / 10);
}