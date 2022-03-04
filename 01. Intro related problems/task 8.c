#include <stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %*d %d", &a, &c);
    printf("First Value = %d,  Last Value = %d", a, c);
}
