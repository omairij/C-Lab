#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, sum=0, i, j;

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
        for(j = 0; j < n; j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}
