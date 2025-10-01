#include <stdio.h>

int main()
{
    float km;

    printf("Enter the speed in km/h : ");

    scanf("%f", &km);

    printf("Your speed is : [%.2f m/s]\n", km * 0.27778);
}