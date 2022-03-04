#include<stdio.h>
int main()
{
    int n, i, p, sum ;

    scanf("%d", &n);
    sum = p = n;
    printf("%d!= ", n);

    for(i = n; i >= 1; i--)
    {
        if(i > 1)
        {
            sum *= (i - 1);

            printf("%d X ", i);
        }

        else
        {
            printf("%d", i);
        }
    }

    printf("= %d", sum);
}
