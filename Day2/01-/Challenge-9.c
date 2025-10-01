#include <stdio.h>

int main()
{
    printf("The size of your table : \n");
    int n;

    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++)
    {
        printf("Tab[%d]: \n", i + 1);
        scanf("%d", &tab[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Tab[%d]: \n", tab[i]);
    }
    printf("\n---------------------------\n");
    

}