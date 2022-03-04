#include<stdio.h>
int main()
{
    int a[100][100], n, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Major diagonal: ");

    for(i = 0; i < n; i++)
    {
        j=i;
        printf("%d ", a[i][j]);
    }
    printf("\nMinor diagonal: ");

    for(i=0, j=n-1; i < n; i++, j--)
    {
        printf("%d ", a[i][j]);
    }


    return 0;
}
