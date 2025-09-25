#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {

                temp = tab[i + 1];
                tab[i + 1] = tab[i];
                tab[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", tab[i]);
    }
}