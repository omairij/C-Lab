#include<stdio.h>
int main()
{
    float x, y, add, sub, mul, quo, rem;

    scanf("%f %f", &x, &y);

    add = x + y;
    sub = x - y;
    mul = x * y;
    quo = x / y;
    rem = x % y;

    printf("Addition: %.1f \nSubtraction: %.1f \nMultiplication: %.1f \nQuotient: %.1f \nReminder: %d", add, sub, mul, quo, rem);
}
