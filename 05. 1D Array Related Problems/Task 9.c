#include<stdio.h>
int main()
{
    int a[100], b[100], i, j, n, sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0, j = n - 1; i < n; i++, j--)
    {
        b[i] = a[j];
    }

    printf("Array A:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray B:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}


