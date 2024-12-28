#include <stdio.h>

// base case 1 : n < 0 : return -1
// base case 2 : n == 0 : return 0
// base case 3 : n == 1 : return 1
// recursive case : f(n - 1) + f(n - 2)
int fibonacci(int n)
{
    // base case
    if (n < 0)
    {
        return -1;
    }
    // base case
    if (n == 0)
    {
        return 0;
    }
    // base case
    if (n == 1)
    {
        return 1;
    }
    // recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    int fibOutput = fibonacci(n);
    printf("Fibonacci(%d) = %d\n", n, fibOutput);
    return 0;
}
