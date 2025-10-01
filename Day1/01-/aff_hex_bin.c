#include <stdio.h>

void print_hexa(int n)
{
    printf("%x\n", n);
}

//Bin later.

int main()
{
    int val;
    printf("Enter A Number You Want to Print In Hexa");
    scanf("%d", &val);
    print_hexa(val);
}