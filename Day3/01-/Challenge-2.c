#include <stdio.h>

int main()
{
    int i = 0;
    char str[] = "Hello World!";
    while(str[i] != '\0')
    {
        i++;
    }
    printf("Your String Length is %d", i);

}