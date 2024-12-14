#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    printf("both %d and %d are %d\n", a, b, a && b);
    printf("both %d and %d are %d\n", a, b, a || b);
    // rotate value
    printf("(rotated-1) both %d and %d are %d\n", a, b, !(a && b));
    printf("(rotated-2) both %d and %d are %d\n", a, b, !(a || b));

    // logical operator
    // Good solution below
    if (a && b)
    {
        printf("both are true\n");
    }
    else
    {
        printf("something is false\n");
    }
    // Bad solution below
    if (a)
    {
        if (b)
        {

            printf("both are true\n");
        }
    }
    else
    {
        printf("something is false\n");
    }
    return 0;
}

// non-zero values ===> true
// zero ==> false

// && , || , !