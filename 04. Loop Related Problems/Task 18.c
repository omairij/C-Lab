#include<stdio.h>
int main()
{
    int n, rev = 0, rem, m, t;

    scanf("%d", &n);

    for(t = n; t!=0; t /= 10)
    {
        rem = t % 10;
        rev = rev * 10 + rem;
    }

    if(n == rev)
    {
        printf("Yes");
    }
    else
        printf("No");
}
