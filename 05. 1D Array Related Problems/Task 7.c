#include<stdio.h>
int main()
{
    int n, i, t, count = 0;
    char a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] =='U')
        {
            count++;
        }
    }

    printf("Count:%d", count);

    return 0;
}
