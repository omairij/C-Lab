#include<stdio.h>
int main()
{
    int a[100][100], m, n, i, j;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise: ");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }

    }
    printf("\nColumn-wise: ");
    for(j = 0; j < n; j++)
    {
        for(i = 0; i < m; i++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
