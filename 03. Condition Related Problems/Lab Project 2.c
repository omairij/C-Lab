#include <stdio.h>
int main()
{
	int num;

	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("\nEven");
	}
	else
	{
		printf("\nOdd");
	}

	getch();
	return 0;
}
