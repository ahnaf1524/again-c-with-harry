#include <stdio.h>
int main()
{
    int a = 67;
    int *j = &a;
    printf("Value of a is %d\n", a);
    printf("The address of a is %u\n", j);
    printf("The value of a using value at operator is %u", *j);
    return 0;
}