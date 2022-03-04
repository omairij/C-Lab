#include<stdio.h>
int display(int n, int num[])
{
    int i;

    for(i = 0; i < n; i++)
    {
        num[i]*=2;
    }

    return num;
}
int main()
{
    int n, a[10], sum=0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    strcpy(a, display(n, a));

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


