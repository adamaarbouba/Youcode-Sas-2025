#include <stdio.h>

int main()
{
    int num, res = 1;
    printf("Enter your number : ");
    scanf("%d", &num);

    while (1)
    {
        res = num % 10;
        num = num / 10;
        printf("%d", res);
        if (num < 9)
        {
            printf("%d", num);
            break;
        }
    }
}