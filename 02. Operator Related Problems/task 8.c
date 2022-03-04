#include<stdio.h>
int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    int max = (x < y) ? y : x;

    printf("Max = %d", max);
}
