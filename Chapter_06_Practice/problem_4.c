#include <stdio.h>
void change(int *n);
int main()
{
    int n;
    scanf("%d", &n);
    change(&n);
    printf("Now value of n is %d\n", n);
    return 0;
}
void change(int *n)
{
    printf("Received %d as ref!\n", *n);
    *n = 14;
}