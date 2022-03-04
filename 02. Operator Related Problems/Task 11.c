#include<stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("1) %d \n2) %d \n3) %d", (a + b) <= 80 && b >=0, (a - b) == 0 || (c != 0), (a != b || (b < a) && c > 0));
}
