#include<stdio.h>
int main()
{
    int a[100], n, t, min, i, j, k;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        min = a[i];
        k=i;
        for(j = i; j < n; j++)
        {
            if(min > a[j])
            {
                min = a[j];
                k = j;
            }

        }

        t = a[i];
        a[i] = a[k];
        a[k] = t;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
