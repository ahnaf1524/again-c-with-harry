#include <stdio.h>
#include <math.h>
int main()
{
    int a = 12;
    int b = 34;
    int c = a + b;
    printf("sum of %d and %d is %d\n", a, b, c);
    // Modular operator used to get reminder
    printf("%d\n", 13 % 2);
    // int i = ab; (illegal)
    int i = a * b; // legal
    // This does not work for exponent in c
    // int m = n ^ p;
    return 0;
}