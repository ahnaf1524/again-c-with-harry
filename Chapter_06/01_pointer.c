// integer pointer concept explain
#include <stdio.h>
int main()
{

    int i = 72;
    // printf("The address of i is %p\n", &i);
    // printf("The address of i is %u\n", &i);
    // %u for unsigned int (non negative value mean positive value only)
    int *j = &i; // j is variable that stores position of i. In terms of book we can j variable is a pointer point to i variable
    // printf("Address of i using pointer j variable %u\n", j);
    // %p is actual format specifier of pointers
    // %u used to seeing in integer form
    // & ===> address of pointer that tell the memory address
    int k = 45;
    // printf("Address of k variable is %u\n", &k);
    // by default memory address is in hexadecimal
    // printf("Address of i using actual format specifier %p\n", &i);
    // printf("Address of j using actual format specifier %p\n", &j);
    // printf("Address of k using actual format specifier %p\n", &k);
    // the value at address operator in c
    printf("The value of address i is %d\n", *(&i));
    // see both code value are same
    // because j pointer point to the i
    printf("The value of address i is %u\n", &i);
    printf("The value of address j is %d\n", *(&j));
    return 0;
}