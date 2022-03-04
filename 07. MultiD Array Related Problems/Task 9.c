#include<stdio.h>
int main()
{
    int a[10][10], n, sum=0, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        j=i;
        if(i!=0 && i!=n-1)
            sum+=a[i][j];
        else if(i == 0)
            for(j = 0; j < n; j++)
            {
                sum+=a[i][j];
            }
    }

    for(i = n-1; i >= 0; i--)
    {
        j=n-1-i;
        if(i!=0 && i!=n-1 && i!=n/2)
            sum+=a[i][j];
        else if(i == n-1)
            for(j = 0; j < n; j++)
            {
                sum+=a[i][j];
            }
    }

    printf("%d", sum);

    return 0;
}
