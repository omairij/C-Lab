#include<stdio.h>
void display(int a, int b)
{
    printf("Value In Function: %d %d \n", a, b);
}
int main()
{
    int n1, n2, t;

    scanf("%d %d", &n1, &n2);

    t = n1;
    n1 = n2;
    n2 = t;

    display(n1, n2);

    printf("Value In Main: %d %d", n1, n2);


    return 0;
}

