#include <stdio.h>
int main()
{
    // Pointer Arithmetic using integer
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++; // take 4 bytes for each integer
    // printf("The value of ptr is %u\n", ptr);
    // Pointer Arithmetic using char
    char a = 'c';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; // take 1 bytes for each char
    printf("The value of ptr is %u\n", ptr);
    return 0;
}
// increment depends of pointer data types
