#include <stdio.h>

int main()
{
    int Celsius;

    printf("Enter your Temperture in Celsius : ");
    scanf("%d", &Celsius);

    if (Celsius >= 100)
    {
        printf("The state of your object is Gaz");
    }

    else if (0 <= Celsius && Celsius < 100)
    {
        printf("The state of your object is Liquide");
    }
    else
    {
        printf("The state of your object is Solide");
    }
}