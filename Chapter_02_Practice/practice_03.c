#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number % 97 == 0)
    {
        printf("divisible\n");
    }
    else
    {
        printf("not divisible\n");
    }
    return 0;
}