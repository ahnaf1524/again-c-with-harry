#include <stdio.h>
int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("We are inside if\n");
        printf("Your age greater than 10\n");
    }
    if (age % 5 == 0)
    {
        printf("We are inside another if\n");
        printf("%d is divisible by 5\n", age);
    }
    return 0;
}