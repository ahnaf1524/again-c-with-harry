#include <stdio.h>
// function prototype
void changeToTenTimes(int *);
// function defintion
void changeToTenTimes(int *n)
{
    *n = (*n * 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Before function call, value is: %d\n", n);
    changeToTenTimes(&n);
    printf("After function call, value is: %d\n", n);
    return 0;
}