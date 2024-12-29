#include <stdio.h>
int sum(int *, int *);
int sum(int *a, int *b)
{
    // a => x
    // b => y
    *a = 94;
    return (*a + *b);
}
int main()
{
    int x = 8, y = 90;
    // send by ref
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y));
    printf("The value of x is %d\n", x);
    // function won the challenge
    return 0;
}
// We send not copy send address
