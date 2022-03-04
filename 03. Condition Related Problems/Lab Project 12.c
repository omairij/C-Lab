#include<stdio.h>
int main()

{
	int x;
	float a, b, c;
    scanf_s("%f %f", &a, &b);
	printf("1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n");
    scanf_s("%d", &x);

	if (x >= 1 && x <= 4)
	{
		if (x == 1)
		{
			c = a + b;
			printf("Addition : %.f\n", c);
		}
		else if (x == 2)
		{
			c = a - b;
			printf("Substraction : %.f\n", c);
		}
		else if (x == 3)
		{
			c = a * b;
			printf("Multiplication : %.f\n", c);
		}
		else
		{
			if (b == 0)
			{
				printf("\n Zero as a divisor is invalid\n\n");
			}
			else
			{
				c = a / b;
				printf("Division : %.f \n", c);
			}
		}
	}
	else
	{
		printf("\n Invalid choice!!!\n\n");
	}
	getch();
	return 0;
}
