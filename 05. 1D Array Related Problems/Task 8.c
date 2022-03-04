#include<stdio.h>
int main()
{
    int a[100], pos[100], n, i, j = 0, k = 0, x, flag = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            flag = 1;
            pos[j] = i;
            j++;
            k++;
        }
    }
    if(flag == 1)
        {
            printf("FOUND at index position: ");
            for(j = 0; j < k; j++)
            {
                printf("%d ", pos[j]);
            }
        }
    else
    {
        printf("NOT FOUND");
    }
}

