#include<stdio.h>
int main()
{
	float a, b, result;
	char c;

	scanf_s("%f %c &f", &a, &c, &b);

	if (c == '+')
	{
		result = a + b;
		printf("Addition: %f", result);
	}

	else if (c == '-')
	{
		result = a - b;
		printf("Subtraction: %f", result);
	}
	else if (c == '*')
	{
		result = a * b;
		printf("Multiplication: %f", result);
	}

	else if (c == '/')

	{
		if (b == 0)
		{
			printf("Division: Zero as divisor is not valid");
		}
		else
		{
			result = a / b;
			printf("Division: %f", result);
		}
	}

	getch();
	return 0;
}


