#include <stdio.h>
#include <math.h>

int main()
{
    float r, v;
    float PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &r);

    v = (4.0 / 3.0) * PI * pow(r, 3);

    printf("Volume: %.2f\n", v);
    return 0;
}