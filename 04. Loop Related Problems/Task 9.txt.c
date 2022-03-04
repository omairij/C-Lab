#include<stdio.h>
int main()
{
    int n, i;
    float sum, A,HW,CT,MT,TF;

    printf("Enter students: ");
    scanf("%d", &n);

    for(i = 1;i <= n;i++)
    {
        printf("\nEnter marks of student %d in order (A,HW,CT,MT,TF): ", i);

        scanf("%f %f %f %f %f", &A, &HW , &CT, &MT, &TF);

        MT = (MT * 30) / 50;

        TF = (TF * 40) / 100;

        sum = A + HW + CT + MT + TF;

        if (sum >= 90 && sum <= 100)
        {
            printf("student %d: A\n", i);
        }
        else if (sum >= 86 && sum <= 89)
        {
            printf("student %d: A-\n", i);
        }
        else if (sum >= 82 && sum <= 85)
        {
            printf("student %d: B+\n", i);
        }
        else if (sum >= 78 && sum <= 81)
        {
            printf("student %d: B\n", i);
        }
        else if (sum >= 74 && sum <= 77)
        {
            printf("student %d: B-\n", i);
        }
        else if (sum >= 70 && sum <= 73)
        {
            printf("student %d: C+\n", i);
        }
        else if (sum >= 66 && sum <= 69)
        {
            printf("student %d: C\n", i);
        }
        else if (sum >= 62 && sum <= 65)
        {
            printf("student %d: C-\n", i);
        }
        else if (sum >= 58 && sum <= 61)
        {
            printf("student %d: D+\n", i);
        }
        else if (sum >= 55 && sum <= 57)
        {
            printf("student %d: D\n", i);
        }
        else
        {
            printf("student %d: F\n", i);
        }

    }

    return 0;
}
