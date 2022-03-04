#include <stdio.h>
int main()
{
	int angle1, angle2, angle3, sum;

	printf("Enter 3 angle values of triangle: ");
	scanf_s("%d %d %d", &angle1, &angle2, &angle3);

	sum = angle1 + angle2 + angle3;

	if(angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        if (sum == 180)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
	getch();
	return 0;
}
