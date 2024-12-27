#include <stdio.h>
int main()
{
    int n = 8, sum = 0;
    for (int i = 1; i <= 10; ++i)
    {
        sum += i * n;
    }
    printf("%d\n", sum);
    return 0;
}