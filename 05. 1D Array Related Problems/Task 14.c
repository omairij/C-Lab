#include<stdio.h>
int main()
{
    int a[10], b[10], c[10], m, n, k=0, i, j;

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            if(a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
    }


    if(k==0)
        printf("Empty set");
    else
        for(i = 0; i < k; i++)
            printf("%d ", c[i]);

    return 0;
}
