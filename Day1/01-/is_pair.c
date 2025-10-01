#include <stdio.h>


void pair(int a)
{
  if (a % 2 == 0) 
  {
    printf("Is Pair");
  }
  else
    printf("Is Not Pair");
}

int main()
{
    int Value;
    printf("Enter A number : ");
    scanf("%d", &Value);

    pair(Value);
}