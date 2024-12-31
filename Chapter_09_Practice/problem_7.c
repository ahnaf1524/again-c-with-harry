#include <stdio.h>
typedef struct Complex
{
    float real;
    float imag;
} Complex;
int main()
{
    Complex c1 = {3.0, 4.5};
    printf("Complex Number : %.2f + %.2f\n", c1.real, c1.imag);
    return 0;
}

// same as problem_5.c