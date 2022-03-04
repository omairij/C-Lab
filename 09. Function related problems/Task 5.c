#include<stdio.h>
void swapnum(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("Value In Function: %d %d \n", a, b);
}
int main()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    swapnum(n1, n2);

    printf("Value In Main: %d %d", n1, n2);


    return 0;
}
