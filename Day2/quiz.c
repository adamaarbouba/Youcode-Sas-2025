#include <stdio.h>

int main()
{
    int x = 0;
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("entre n :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 9; j > 0; j--)
        {
            /* code */
            x = arr[j];
            arr[j] = arr[j-1];
            arr[j - 1] = x;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }

    
    return 0;
}
