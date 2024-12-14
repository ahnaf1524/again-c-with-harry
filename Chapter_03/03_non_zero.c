#include <stdio.h>
int main()
{
    if (1)
    {
        printf("it is considered as \"true\"\n");
    }
    if (-255)
    {
        printf("it is also considered as \"true\"\n");
    }
    if ('c')
    {
        printf("this also be true because false\n");
    }
    if (2.24)
    {
        printf("this is also be true\n");
    }
    return 0;
}
// non-zero all integer , floating , negative , positive  numbers , characters are true
// zero  are false

// >= , <= , > , < , == , !=