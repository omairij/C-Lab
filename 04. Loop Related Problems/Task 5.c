#include<stdio.h>
int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    if(x < y)
    {
        for(; x < y; x++)
        {
            printf("%d,", x * x);
        }
    }

    else
    {
        for(; x > y; x--)
        {
            printf("%d,", x * x);
        }
    }

    printf("Reached!");

    return 0;
}
