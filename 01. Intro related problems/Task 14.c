#include<stdio.h>
int var = 10;
int n();
int main()
{
    printf("A. Global:%d \n", var);

    int var = 20;

    printf("B. Local:%d\n", var);

    {
        extern int var;
        printf("C. Global:%d", var);
    }

}
