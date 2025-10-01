#include <stdio.h>

int main()
{
    int L,l;
    printf("Give me the Length of your Rectangular : ");
    scanf("%d", &L);
    printf("Give me the Height of your Rectangular :");
    scanf("%d", &l);
    int S = l * L;
    printf("The Surface of the Rectangular is : %d", S);

}