#include<stdio.h>
int main()
{
    int n, i, term = 1;

    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        printf("%d,",term);

        term = term+2;
    }

    printf("%d", term);
}
