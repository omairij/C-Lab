#include<stdio.h>
int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    k = n/2+1;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i<=n/2){
                if(i==n/2)
                    printf("$");

                else{
                    if(j==n/2)
                        printf("$");
                    else{
                        if(j==(n/2)-i || j==(n/2)+i)
                            printf("$");
                        else
                            printf("_");
                    }

                }
            }
            else{
                if(j==(n/2)-k || j==(n/2)+k)
                    printf("$");
                else
                    printf("_");
                k--;
            }
        }
        printf("\n");
    }


}
