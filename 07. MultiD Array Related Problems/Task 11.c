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
        for(j = 0; j < n; j++)
        {
            if(i%2==0)
            {
                if(j%2==1)
                {
                    sum+=a[i][j];
                }
            }
            else
                sum+=a[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}
