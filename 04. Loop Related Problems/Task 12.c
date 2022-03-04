#include<stdio.h>
int main()
{
    int n, i, t1 = 1, t2 = 0, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;

        if(i < n)
        {
            printf("%d,", sum);
        }
        else
        {
            printf("%d", sum);
        }
    }

    return 0;
}
