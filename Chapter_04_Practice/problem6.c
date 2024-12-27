#include <stdio.h>
int main()
{
    int n = 10, sum = 0, sum1 = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        ++i;
    }
    printf("(While Loops) Sum is %d\n", sum);
    for (int i = 0; i <= n; ++i)
    {
        sum1 += i;
    }
    printf("(for Loops) Sum is %d\n", sum1);
    return 0;
}