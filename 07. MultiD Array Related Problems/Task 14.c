#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, i, j, k, l;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < m; k++)
            {
                for(l = 0; l < n; l++)
                {
                    if(a[k][l] == a[i][j] && l != j)
                        a[k][l] = -1;
                }
            }
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
