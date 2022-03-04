#include<stdio.h>
int main()
{
    int i;

    char input, ch;

    for(i = 1; input != 'A'; i++)
    {
        scanf("%c", &input);

        if(input != 'A')
        {
            printf("Input %d: %c \n", i, input);
            fflush(stdin);
        }
    }

    return 0;
}
