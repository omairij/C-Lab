#include<stdio.h>
int main()
{
    int a[100], i, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = n; i > 0; i--)
        printf("%d ", a[i-1]);

    return 0;
}
