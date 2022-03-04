#include<stdio.h>
int main()
{
    int a[3][3], i, j, sum1=0, sum2=0, det;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        j=i;
        sum1+=a[i][j];
    }

    for(i = 2; i >= 0; i--)
    {
        j=i;
        sum2+=a[i][j];

    }
    det = sum1 - sum2;
    printf("%d", det);

    return 0;
}
