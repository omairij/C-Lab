#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    for(i =1; i <= n; i++)
    {
        for(j = 0; j < n-i; j++)
        {

                printf("_");

        }
        for(j = 0; j < (i*2)-1; j++)
        {
            printf("*");
        }

    printf("\n");

    }
}


