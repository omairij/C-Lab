#include<stdio.h>
int main()
{
	int x, n1, n2, n3;
	printf("Guessing Game-2017\n");

	scanf("%d", &x);

	printf("Guess This  number please\n");

	scanf("%d", &n1);
	if (n1 == x)
	{
		printf("Right,Player 2 wins!\n");
	}
	else
	{
		printf("Wrong,2 chance left!\n");
	}
	scanf("%d", &n2);

	if (n2 == x)
	{
		printf("Right,Player 2 wins!\n");
	}
	else
	{
		printf("Wrong,1 chance left!\n");
	}
	scanf("%d", &n3);

	if (n3 == x)
	{
		printf("Right,Player 2 wins!\n");
	}
	else
	{
		printf("wrong,Player 1 wins!");
	}
	return 0;
}
