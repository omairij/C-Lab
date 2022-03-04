#include<stdio.h>
void findEven(int n, int num[])
{
    int even[10], i, k=0;

    for(i = 0; i < n; i++)
    {
        if(num[i]%2==0)
        {
            even[k] = num[i];
            k++;
        }
    }

    for(i = 0; i < k; i++)
    {
        printf("%d ", even[i]);
    }
}
int main()
{
    int n, a[10], sum=0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    findEven(n, a);

    return 0;
}

