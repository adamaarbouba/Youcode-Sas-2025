#include <stdio.h>
#include <string.h>

int main()
{
    char str1[60];
    char str2[60];

    printf("The first string : ");
    fgets(str1, 60, stdin);
    str1[strlen(str1) - 1] = '\0';
    str1[strcspn(str1, "\n")] = '\0';
    printf("The Second string : ");
    fgets(str2, 60, stdin);
    str2[strlen(str2) - 1] = '\0';

    if (strstr(str1, str2))
        printf("The string was found");
    else
        printf("The string dosnt exist");
}