#include<stdio.h>
int main()
{
    int n, i, j, max, min, pos1, pos2, a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        max = a[i];
        min = a[i];

        for(j = 0; j < n; j++)
        {
            if(max < a[j])
            {
                max = a[j];
                pos1 = j;
            }
            if(min > a[j])
            {
                min = a[j];
                pos2 = j;
            }
        }
    }

    printf("Max:%d, Index; %d \nMin:%d, Index %d", max, pos1, min, pos2);

}
