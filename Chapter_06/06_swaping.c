#include <stdio.h>
// void swap(int, int);
void swap(int *, int *);
// Not working code
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 6;
    printf("(Before) The value of a is %d and value of b is %d\n", a, b);
    // swap(a, b); call by value (not change the value)
    swap(&a, &b); // call by reference (change the value)
    printf("The value of a is %d and value of b is %d\n", a, b);
    return 0;
}