#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    for(i =0;i < n;i++)
    {
        k = i;
        for(j = 0;j < n; j++)
        {
            printf("%d", (k+1)%2);
            k++;
        }

    printf("\n");

    }
}
