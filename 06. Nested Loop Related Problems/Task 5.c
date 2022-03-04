#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    for(i = 0;i < n; i++)
    {
        k = n;

        for(j = 0; j <= i; j++)
        {
            printf("%d", k);

            k--;
        }

    printf("\n");

    }
}


