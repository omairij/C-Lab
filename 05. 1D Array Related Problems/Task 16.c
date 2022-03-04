#include<stdio.h>
int main()
{
    int a[10], b[10], c[100], flag, m, n, k=0, i, j;

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < m; i++)
    {
        flag = 0;
        for(j = 0; j < n; j++)
            if(a[i] == b[j])
                flag = 1;

        if(flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }

        for(i = 0; i < k; i++)
            printf("%d ", c[i]);

    return 0;
}
