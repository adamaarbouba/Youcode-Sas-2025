#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    return (c);
}

int main()
{
    int a, b, c;
    printf("Give me the numbers you want to add up : \n");
    printf("First Number : ");
    scanf("%d", &a);
    printf("Second Number : ");
    scanf("%d", &b);
    c = sum(b, a);
    printf("This is the Sum : %d", c);
}