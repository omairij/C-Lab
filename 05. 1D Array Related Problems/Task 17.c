#include<stdio.h>
int main()
{
    int a[100], n, m, sum=0, i, j=0, k=0;

    scanf("%d", &n);

    m = n*n;

    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < m; i++,j++)
    {
            if(j == n)
            {
                j=0;
                k++;
            }
            if(k == 0)
            {
                if(j <= n/2)
                    sum+=a[i];
                else if(j == n-1)
                sum+=a[i];
            }

            else if(k == n-1)
            {
                if(j >= n/2)
                    sum+=a[i];
                else if(j == 0)
                    sum+=a[i];
            }
            else if(k == n/2)
                sum+=a[i];

            else
            {
                if(k < n/2)
                {
                    sum+=a[i+(n/2)];
                    sum+=a[i+n-1];
                    i+=n;
                }
                else
                {
                    sum+=a[i+(n/2)];
                    sum+=a[i];
                    i+=n;
                }
            }

    }
    printf("%d", sum);

    return 0;
}
