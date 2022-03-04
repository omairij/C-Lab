#include <stdio.h>
int main()
{
	char a;

	scanf_s("%c", &a);

	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		printf("Alphabet");
	}
	else if (a >= '0' && a <= '9')
	{
		printf("Digit");
	}
	else
	{
		printf("Special");
	}
	getch();
		return 0;
}
