#include<stdio.h>
int main()
{
    const float pi = 3.1416;
    float r, area;

    scanf("%f", &r);

    area = 2.00 * pi * r;

    printf("Area: %.2f", area);
}
