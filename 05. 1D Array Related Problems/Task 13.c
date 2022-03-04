#include<stdio.h>
int main()
{
    int a[100], n, t, num, i, j, k, l;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(l=0; l<2; l++)
        {
            num = a[i];
            for(j = i+1; j < n; j++)
                if(num == a[j])
                {
                    for(k=j; k<n; k++)
                        a[k]=a[k+1];
                    n--;
                }
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
