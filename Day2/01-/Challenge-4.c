#include <stdio.h>

int main()
{
    int a;

    printf("Le nombre d'éléments d'un tableau?: ");
    scanf("%d", &a);

    int b[a];

    printf("Saisir les éléments :\n");
    
    for(int j = 0 ; j < a; j++)
    {
        scanf("%d", &b[j]);
    }
    int c = b[0];
    for(int i = 0; i < a ; i++)
    {
        if(c < b[i])
            c = b[i];
    }

    printf("maximum value : %d", c);

}