#include <stdio.h>
#include <string.h>

int main()
{
    char str1[60];
    char str2[60];

    printf("The first string : ");
    fgets(str1, 60, stdin);
    printf("\nThe Second string : ");
    fgets(str2, 60, stdin);

    strcat(str1, str2);

    printf("\nThe full string is : %s ", str1);
}