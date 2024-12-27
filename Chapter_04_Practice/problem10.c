#include <stdio.h>
#include <math.h>
int main()
{
    // Easy Version
    // int n, found = -1;
    // scanf("%d", &n);
    // int i = 2;
    // for (i = 2; i < sqrt(n); ++i)
    // {
    //     if (n % i == 0)
    //     {
    //         break;
    //     }
    // }
    // if (i > sqrt(n))
    // {
    //     printf("Prime");
    // }
    // else
    // {
    //     printf("Not Prime");
    // }
    // More optimized
    int n;
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d Not Prime\n", n);
        return 0;
    }
    if (n == 2)
    {
        printf("%d is Prime", n);
        return 0;
    }
    if (n % 2 == 0)
    {
        printf("%d Not Prime\n", n);
        return 0;
    }
    for (int i = 3; i < sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            printf("%d Not Prime\n", n);
            return 0;
        }
    }
    printf("%d is Prime", n);
    return 0;
}