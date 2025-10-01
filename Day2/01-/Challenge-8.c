#include <stdio.h>

int main()
{
    printf("The size of your table : \n");
    int n;

    scanf("%d", &n);

    int tab[n];
    int Dup[n];
    for (int i = 0; i < n; i++)
    {
        printf("the Number [%d] in Your table: \n", i + 1);
        scanf("%d", &tab[i]);
    }

        for (int i = 0; i < n; i++)
        {
            Dup[i] = tab[i];
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d.", tab[i]);
        }
        printf("\n---------------------------\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d", Dup[i]);
        }
}