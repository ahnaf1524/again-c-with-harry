#include <stdio.h>
typedef struct Complex
{
    float real;
    float imag;
} Complex;
void displayComplex(Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}
int main()
{
    Complex numbers[5];
    printf("Enter 5 complex numbers (real and imaginary parts):\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Complex Number %d:\n", i + i);
        printf("Real: ");
        scanf("%f", &numbers[i].real);
        printf("Imaginary : ");
        scanf("%f", &numbers[i].imag);
    }
    printf("You have entered : \n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Complex number %d : ", i + 1);
        displayComplex(numbers[i]);
    }
    return 0;
}