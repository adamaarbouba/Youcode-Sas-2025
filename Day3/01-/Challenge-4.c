#include <stdio.h>
#include <string.h>

int main()
{
    char str1[60];
    char str2[60];
    int c;

    printf("The first string : ");
    scanf("%s", str1);
    printf("\nThe Second string : ");
    scanf("%s", str2);
    
    c = strcmp(str1,  str2);

    if (c == 0)
    {
        printf("Equal");
    }
    else if (c > 0)
    {
        printf("%s is bigger", str1);
    }
    else
        printf("%s is bigger", str2);
}