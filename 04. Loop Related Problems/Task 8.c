#include<stdio.h>
int main()
{
    int i, n;

    scanf("%d", &n);

    for(i = 1; n != 0; i++)
    {
        printf("%d", n % 10);

        n = n / 10;
    }

    return 0;
}
