#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);
    int m = n/2;

    for(i = 1; i < m; i++)
    {
        for(j = 0; j < m-i; j++)
                printf("_");

        for(j = 0; j < (i*2)-1; j++)
            printf("*");

        printf("\n");

    }
    for(i = m; i >= 1; i--)
    {
        for(j = 0; j < m-i; j++)
                printf("_");

        for(j = 0; j < (i*2)-1; j++)
            printf("*");

        printf("\n");

    }
}
