#include<stdio.h>
int main()
{
    int a[10][10], n, m, sum=0, i, j;

    scanf("%d", &n);

    m = n+1;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == 0)
            {
                if(j <= n/2)
                    sum+=a[i][j];
                else if(j == n-1)
                sum+=a[i][j];
            }

            else if(i == n-1)
            {
                if(j >= n/2)
                    sum+=a[i][j];
                else if(j == 0)
                    sum+=a[i][0];
            }
            else if(i == n/2)
            {
                sum+=a[i][j];
            }
            else
            {
                if(i < n/2)
                {
                    sum+=a[i][n/2];
                    sum+=a[i][n-1];
                    break;
                }
                else
                {
                    sum+=a[i][n/2];
                    sum+=a[i][0];
                    break;
                }
            }
        }
    }
    printf("%d", sum);

    return 0;
}
