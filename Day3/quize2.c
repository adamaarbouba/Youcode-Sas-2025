// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

// int *div(int a, int b)
// {
//     int c = -1;
//     int n[a];

//     for (int i = 2; i <= a; i++)
//     {

//         if (a % i == 0 && b % i == 0)
//         {
//             c++;
//             n[c] = i;
//         }
//     }

//     int *tab = malloc(sizeof(int) * c + 1);
//     for (int i = 0; i <= c; i++)
//     {
//         *(tab + i) = n[i];
//     }

//     return tab;
// }

int main()
{
    int x, j;
    printf("first\n");
    scanf("%d", &x);
    printf("second\n");
    scanf("%d", &j);

    printf("tab\n");

    int c = -1;
    int n[x];

    for (int i = 2; i <= x; i++)
    {

        if (x % i == 0 && j % i == 0)
        {
            c++;
            n[c] = i;
        }
    }
    int *tab = malloc(sizeof(int) * c + 1);
    for (int i = 0; i <= c; i++)
    {
        *(tab + i) = n[i];
    }

    for (int i = 0; i <= sizeof(tab) / sizeof(tab[0]); i++)
    {
        printf("------>%d\n", *(tab) + i);
    }

    return 0;
}