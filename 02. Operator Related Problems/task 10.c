#include<stdio.h>
int main()
{
    int a, b, c, x, y;

    scanf("%d %d %d", &a, &b, &c);

    printf("a) %d \nb) %d \nc) %d", (a + b ) <= 80, !(a + c), a != 0);
}
