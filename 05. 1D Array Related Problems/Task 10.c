#include<stdio.h>
int main()
{
    int a[100],  t[100], m, n, i;
    int b[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
            scanf("%d", &a[i]);

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        t[i] = a[i];

    for(i = 0; i < m; i++)
        a[i] = b[i];

    for(i = 0; i < n; i++)
        b[i] = t[i];

    printf("Array A:");

    for(i = 0; i < m; i++)
        printf("%d ", a[i]);

    printf("\nArray B:");

    for(i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
