#include<stdio.h>
int main()
{
    int x, y, i, total;

    scanf("%d %d", &x, &y);

    total = x;

    for(i = 1; i < y ; i++)
    {
        total *= x;
    }

    printf("%d", total);
    return 0;
}
