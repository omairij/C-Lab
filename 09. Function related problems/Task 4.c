#include<stdio.h>
void addnum(int n, int num[])
{
    int result=0, i;
    for(i = 0; i < n; i++)
    {
        result+=num[i];
    }
    printf("Sum In Function: %d \n", result);
}
int main()
{
    int n, a[10], sum=0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    addnum(n, a);

    for(i = 0; i < n; i++)
    {
        sum+=a[i];
    }


    printf("Sum In Main: %d", sum);


    return 0;
}
