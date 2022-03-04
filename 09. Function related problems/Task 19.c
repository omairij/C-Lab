#include<stdio.h>
int InputMatrix(int m, int n)
{
    int a[10][10], i, j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    return a;
}
int ScalarMultiply(int a[][10], int m, int n)
{
    int num, i, j;
    scanf("%d", num);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            a[i][j]*=num;
    }
    return a;
}
int ShowMatrix(int m, int n)
{
    int a[10][10], b[10][10], i, j;
    strcpy(a, InputMatrix(m, n));
    strcpy(b, ScalarMultiply(a, m, n));
    printf("Original:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nMultiplied by %d:\n", 2);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    ShowMatrix(m, n);
}
