#include <stdio.h>

int main()
{
    char str1[60];
    char str2[60];
    int j = 0, i = 0;

    printf("The string : ");
    scanf("%s", str1);
    while (str1[i] != '\0')
    {
        i++;
    }
    while (i  >= 0)
    {
        printf("%c", str1[i]);
        i--;
    }
    

    printf("\nThe Revers string is : %s ", str1);
}