#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf_s("%d", &a);

	if ((a & (a - 1)) == 0)
	{
	printf("%d is is power of 2 \n", a);
    }
	else
	{
		printf("%d is not power of 2 \n", a);
	}
	getch();
	return 0;
}