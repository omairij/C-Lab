#include<stdio.h>
int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    x+=y;
    y-=x;

    printf("Incremented Value: %d \nDecremented Value: %d", x, y);
}
