#include <stdio.h>
#include <math.h>


int main()
{
    int num1, num2, num3;
    float res;
    printf("Enter the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);
    printf("Enter the Third Number : ");
    scanf("%d", &num3);

    res = pow(num1 * num2 * num3, 1.0 / 3.0);
    printf("La Myenne Géométrique : %.2f", res);
}