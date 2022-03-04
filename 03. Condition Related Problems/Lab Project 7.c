#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter 2 numbers: ");
	scanf_s("%d %d", &x, &y);

	if (x < y)
	{
		printf("x is less than y");
	}
	else if (x > y)
	{
		printf("x is greater than y");
	}
	else if (x == y)
	{
		printf("x is equal to y");
	}
	getch();
	return 0;
}
