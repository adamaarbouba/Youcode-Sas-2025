#include <stdio.h>

int main()
{

    char str[100];
    int i = 0;
    printf("====>");
    fgets(str, 100, stdin);
    while (str[i] != '\0')
    {
        /* code */
        while (str[i] == ' ')
        {
            i++;
        }
        printf("%c", str[i]);
        i++;
    }
}