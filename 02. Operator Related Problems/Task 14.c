#include<stdio.h>
#include<math.h>
int main()
{
    float x;

    scanf("%f", &x);
    printf("A = %.f, B = %.f, C = %.1f", ceilf(x), floor(x), x);
}

