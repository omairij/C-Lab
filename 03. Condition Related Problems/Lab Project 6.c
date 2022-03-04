#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf_s("%d", &a);

	if (a > 0)
	{
		if ((a & (a - 1)) == 0)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else if (a == 0)
	{
		printf("Zero is not valid input");
	}
	else
	{
		printf("negative number is not valid");
	}
	getch();
	return 0;
}
