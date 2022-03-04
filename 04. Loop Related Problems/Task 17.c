#include<stdio.h>
int main()
{
    int n, i, term = 1;

    scanf("%d", &n);

    for(i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            term = 0;
        }
    }

    if(term == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}
