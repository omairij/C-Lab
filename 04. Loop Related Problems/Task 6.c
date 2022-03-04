#include<stdio.h>
int main()
{
    int a, n, i, guess;

    scanf("%d %d", &a, &n);

    for(i = n; i >= 1; i--)
    {
        scanf("%d", &guess);

        if(guess == a)
        {
            printf("Right, Player-2 wins!");
            break;
        }


        printf("Wrong, %d Choice(s) Left!\n", i-1);
    }

    if(guess != a)
    {
        printf("Player-1 wins!");
    }

    return 0;
}
