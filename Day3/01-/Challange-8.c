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
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    printf("%s", str);
}