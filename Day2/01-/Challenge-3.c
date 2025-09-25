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
    int c = 0;
    for(int i = 0; i < a; i++)
    {
        c =  c + b[i];
    }
    
    printf("La somme : %d", c);
}