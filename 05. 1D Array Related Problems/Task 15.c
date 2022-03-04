#include<stdio.h>
int main()
{
    int a[10], b[10], c[100], flag, m, n, k, i, j;

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < m; i++)
        c[i]=a[i];

    k=i;
    for(i = 0; i < n; i++)
    {
        flag = 0;
        for(j = 0; j < m; j++)
            if(b[i] == a[j])
            {
                flag = 1;
            }
        if(flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

        for(i = 0; i < k; i++)
            printf("%d ", c[i]);

    return 0;
}
