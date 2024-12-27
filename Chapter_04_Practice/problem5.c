#include <stdio.h>
int main()
{
    int n = 10, sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        ++i;
    }
    printf("Sum is %d\n", sum);
    return 0;
}