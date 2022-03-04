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
    int i, term, prime, j=0;
    for(i = 2; j < n; i++)
    {
        if(IsPrime(i) == 1)
        {
            j++;
            prime = i;
        }
    }
    return prime;
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%dth Prime: %d", n, GeneratePrime(n));

    return 0;
}
