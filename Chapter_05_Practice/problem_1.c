#include <stdio.h>
// function prototype
float average(float, float, float);
float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float avg = average(a, b, c);
    printf("Average is %0.2f\n", avg);
    return 0;
}