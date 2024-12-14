#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number < 0)
    {
        printf("%d cannot be negative number\n", number);
    }
    else if (number % 2 == 0)
    {
        printf("%d is an even number\n", number);
    }
    else
    {
        printf("%d is an odd number\n", number);
    }
    return 0;
}