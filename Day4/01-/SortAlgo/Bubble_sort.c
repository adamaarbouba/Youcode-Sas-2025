#include <stdio.h>

int main()
{
    int temp;
    int tab[] = {1, 9, 6, 3, 7, 2, 8, 0, 5, 4};
    int n = (sizeof(tab) / sizeof(tab[0]));

    for (int i = 0; i < n; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");

    return 0;
}