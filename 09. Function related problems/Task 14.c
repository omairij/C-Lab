#include <stdio.h>
#include <math.h>

float Calc_Std_deviation(int n, float data[])
{
    float SDev = 0.0;
    int i;

    for(i=0; i<n; ++i)
        SDev += pow(data[i] - CalcMean(data, n), 2);

    return sqrt(SDev/n);
}
CalcMean(float data[], int n)
{
    float sum = 0.0, mean;
    int i;

    for(i=0; i<n; i++)
    {
        sum += data[i];
    }

    mean = sum/n;
    return mean;
}

int main()
{
    int i, n;
    float data[10];

    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%f", &data[i]);

    printf("%.2f", Calc_Std_deviation(n, data));

    return 0;
}
