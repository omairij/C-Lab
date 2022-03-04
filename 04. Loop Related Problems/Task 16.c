#include<stdio.h>
int main()
{
    int x, y, i, GCD, LCM = 1;

    scanf("%d %d", &x, &y);

    GCD = x;

    for(i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            GCD = i;
        }
    }

    LCM = (x * y) / GCD;
    printf("GCD:%d\nLCM:%d", GCD, LCM);
    return 0;
}
