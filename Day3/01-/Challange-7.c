#include <stdio.h>

int main()
{

    char str[100];
    int i = 0;
    printf("====>");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        /* code */
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    printf("%s", str);
}