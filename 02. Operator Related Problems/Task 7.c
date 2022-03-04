#include<stdio.h>
int main()
{
    int x, int_y;
    float y,float_x;

    scanf("%d %f", &x, &y);

    int_y = y;
    float_x = x;

    printf("Assignment: %f assigned to an int produces %d \nAssignment:  %d assigned to a float produces %f \n", y, int_y, x, float_x);

    x = (float) float_x;
    y = (int) int_y;

    printf("Type Casting: (float) %d produces %f \nType Casting: (int) 123.125 produces %d", x, float_x, int_y);
}
