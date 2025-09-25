#include <stdio.h>

int main()
{
    char str1[60];
    char Lookfor;
    int count = 0, i = 0;
    int c;

    printf("My string : ");
    scanf("%s", str1);

    printf("Look for string :");
    scanf(" %c", &Lookfor);

    while (str1[i] != '\0')
    {
        c = str1[i] - Lookfor;

        if (c == 0)
        {

            count++;
        }
        i++;
    }
    printf("count is : %d", count);
}