#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, i, j, k=0, l=0;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
                k = i;
                l = j;
            }
        }
    }
    printf("Max:%d\nLocation:[%d][%d]", max, k, l);

}
