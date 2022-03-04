#include<stdio.h>
int IsPrime(int a)
{
    int term=1, i;
    for(i = 2; i < a/2; i++)
    {
        if (a % i == 0)
        {
            term = 0;
        }
    }

    return term;
}
int main()
{
    int n, term;

    scanf("%d", &n);

    term = IsPrime(n);
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
