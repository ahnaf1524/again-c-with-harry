#include <stdio.h>

int average(int a, int b)
{
    int result = (a + b) / 2; // Calculate average
    return result;            // Return the result
}

int sum(int a, int b)
{
    int result = a + b; // Calculate sum
    return result;      // Return the result
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sumResult = sum(a, b);
    int avgResult = average(a, b);

    printf("Average of %d and %d is %d\n", a, b, avgResult);
    printf("Sum of %d and %d is %d\n", a, b, sumResult);

    return 0;
}
