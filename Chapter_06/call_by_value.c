#include <stdio.h>
int sum(int, int);
int change(int);
int main()
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    int result = sum(a, b); // send copy of a , b variable to sum() as arguments. As we send copy function cannot change the value of variable
    printf("%d + %d = %d\n", a, b, result);
    // check is it possible to change the value of variable when we call by value (send copy of variable as arguments to function)
    int check = change(n);
    // function cannot change
    printf("I challenge you function you cannot change value of n prove is %d\n", check);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int change(int n)
{
    n = 67;
    return n;
}
// function can change the value of variable if we send argument as reference