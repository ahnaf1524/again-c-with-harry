#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int fact = 1;
    // for (int i = 1; i <= n; ++i)
    // {
    //     fact *= i;
    // }
    // printf("%d\n", fact);
    int i = 1, fact = 1;
    while (i <= n)
    {
        fact *= i;
        ++i;
    }
    printf("%d\n", fact);
    return 0;
}