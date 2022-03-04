#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        if(i==0 || i==n-1)
            for(j = 0; j < n; j++)
                printf("Z");
        else{
            for(j=0; j<n; j++){
                if(j==n-i-1)
                    printf("Z");
                else
                    printf(" ");
            }
        }
    printf("\n");
    }
}
