#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], n, flag=0, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(b[i][j] != a[i][j])
                flag = 1;
        }
    }
    if(flag == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
