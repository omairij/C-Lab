#include<stdio.h>
#include<math.h>
int main()
{
	float num1, num2, a;
	int choice, choice2;

	scanf("%f %f", &num1, &num2);

	printf("Choice\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n ");

	scanf("%d", &choice);

	if (choice == 1)
	{
	    a = num1 + num2;
		printf("Addition: %.f", a);
	}

	else if (choice == 2)
	{
	    a = num1 - num2;
		printf("Subtraction: %,f", a);
	}

	else if (choice == 3)
	{
        a = num1 * num2;
		printf("Multiplication: %.f", a);
	}

	else if (choice == 4)
	{
		if (num2 != 0)
        {
            printf("Choose;\n 1. Quotient \n 2. Remainder\n");
            scanf("%d", &choice2);

            if (choice2 == 1)
            {
                a = num1 / num2;
                printf("Quotient: %.f", a);
            }
            else
            {
                a = fmod(num1, num2);
                printf("Reminder: %.f", a);
            }
        }
        else
        {
            printf("Error: Divisor is zero");
        }

	}
	getchar();
	return 0;
}
