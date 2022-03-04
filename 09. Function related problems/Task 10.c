#include<stdio.h>
int display(int n, int num[])
{
    int i, j, k, t, min;

    for(i = 0; i < n; i++)
    {
        min = num[i];
        k = i;
        for(j = i; j < n; j++)
        {
            if(min > num[j])
            {
                min = num[j];
                k = j;
            }
        }
        t = num[i];
        num[i] = num[k];
        num[k] = t;

    }

    return num;
}
int main()
{
    int n, a[10], sum=0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    strcpy(a, display(n, a));

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
