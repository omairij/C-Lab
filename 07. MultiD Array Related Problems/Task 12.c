#include<stdio.h>
int main()
{
    int a[10][10], m, n, t, i, j;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n/2; j++)
        {
            t = a[i][j];
            a[i][j] = a[i][n-1-j];
            a[i][n-1-j] = t;
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
