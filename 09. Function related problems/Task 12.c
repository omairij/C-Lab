#include<stdio.h>
int IsPrime(int a)
{
    int term=1, i;
    for(i = 2; i <= a/2; i++)
    {
        if (a % i == 0)
        {
            term = 0;
        }
    }

    return term;
}
int GeneratePrime(int n)
{
    int i, term, j=0;
    for(i = 2; i < n; i++)
    {
        term = IsPrime(i);
        if(term == 1)
        {
            j++;
            if(j!=1)
                printf(", ");
            printf("%d", i);
        }
    }
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("Prime less than %d: ", n);

    GeneratePrime(n);


    return 0;
}
