#include <stdio.h>
// pointer and pointing variable both have same type data
// float pointer can only point to float
// char pointer can only point to char
// double pointer can only point to double
// inter pointer can only point to integer

int main()
{
    char i = 'a';
    char *j = &i; // j is char type pointer point to char type i
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    float k = 5.2342;
    float *k1 = &k;
    // see in the unsigned integer form
    // printf("The address of i is %u\n", &i);
    // printf("The address of i is %u\n", j);
    return 0;
}