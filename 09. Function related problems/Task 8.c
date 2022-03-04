#include<stdio.h>
int findMin(int n, int num[])
{
    int even[10], i, min=num[0];

    for(i = 0; i < n; i++)
    {
        if(min > num[i])
            min = num[i];
    }
    return min;
}
int main()
{
    int n, a[10], sum=0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Minimum Value: %d", findMin(n, a));

    return 0;
}


