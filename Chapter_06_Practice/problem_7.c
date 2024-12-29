#include <stdio.h>
int changeToTenTimes(int n)
{
    n = n * 10;
    printf("Inside function call, value is: %d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Before function call, value is: %d\n", n);
    changeToTenTimes(n);
    printf("Before function call, value is: %d\n", n);
    return 0;
}