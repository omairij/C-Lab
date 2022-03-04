#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    for(i =0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j + 1 < n - i)
            {
                printf("_");
            }
            else
            {
                printf("*");
            }
        }

    printf("\n");

    }
}


