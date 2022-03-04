#include<stdio.h>
int main()
{
    float  n, sum, avg, a;

    int  i;

    scanf("%f", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%f", &a);

        sum += a;
    }

    avg = sum / n;

    printf("AVG of %.f inputs: %f", n, avg);

    return 0;
}
