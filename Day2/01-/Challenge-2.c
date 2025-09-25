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
    int temp;
    for(int i = 0; i < a ; i++)
    {
        if(b[0 + i] > b[i])
        {
            temp = b[0 + i];
            b[0 + i] = b[i];
            temp = b[0 + i];
        }
    }
    for(int i = 0; i < a; i++)
    {
        printf("%d\n", b[i]);
    }

}