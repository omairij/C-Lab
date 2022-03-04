#include<stdio.h>
int findGCD(int x, int y)
{
    int GCD = x, i;

    for(i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            GCD = i;
        }
    }
    return GCD;
}
int findLCM(int x, int y)
{
    int LCM;
    LCM = (x * y) / findGCD(x, y);
    return LCM;
}
int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("GCD:%d\nLCM:%d", findGCD(x, y), findLCM(x, y));

    return 0;
}
