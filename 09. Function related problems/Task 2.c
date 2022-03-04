#include<stdio.h>
void print(char a)
{
    printf("Value received from main: %c", a);
}
int main()
{
    char ch;
    scanf("%c", &ch);
    print(ch);

    return 0;
}
