#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2;
    int y1, y2;
    int z1, z2;
    float dist;

    printf("Give me the x/y/z of your first point : \n");
    scanf("%d%d%d", &x1, &y1, &z1);
    printf("Give me the x/y/z of your Second point : \n");
    scanf("%d%d%d", &x2, &y2, &z2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("Distance: %.2f\n", dist);
    return 0;
}