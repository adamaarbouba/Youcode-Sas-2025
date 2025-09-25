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
    int multi;
    printf("Le facteur de multiplication\n");
    scanf("%d", &multi);

    for(int i = 0; i < a; i++)
    {
        printf("%d\n", b[i] * multi);
    }


}