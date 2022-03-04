#include<stdio.h>
void addnum(int a, int b, int c)
{
    int result;
    result = a+b+c;
    printf("Sum In Function: %d \n", result);
}
int main()
{
    int n1, n2, n3, sum;

    scanf("%d %d %d", &n1, &n2, &n3);

    sum = n1+n2+n3;
    addnum(n1, n2, n3);

    printf("Sum In Main: %d", sum);


    return 0;
}
