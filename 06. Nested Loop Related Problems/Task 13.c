#include<stdio.h>
int main()
{
    int n, i, j, k, m;

    scanf("%d", &n);
    m = (n*2)-1;

    for(i=0; i<n; i++)
    {
        k=i;
        for(j=0; j<m; j++){
            if(j<=i){
                printf("%d",j+1);
            }
            else if(j>=m-i-1){
                if(i!=n-1)
                    printf("%d", k+1);
                else
                    printf("%d", k);
                k--;
            }
            else
                printf("_");
        }
    printf("\n");
    }
}
