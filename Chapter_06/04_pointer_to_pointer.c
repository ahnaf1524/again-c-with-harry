#include <stdio.h>
int main()
// & ==> Ampersand Symbol
{
    int i = 6;
    int *j = &i;
    int **k = &j;
    // ***&&&a = a like 7 / 7 = a same thing &&& / *** = value
    printf("The value of i is %d\n", i);
    printf("(same) The value of i is %d\n", *(&i));
    printf("(same) The value of i is %d\n", *j);
    printf("(complex) The value of i is %d\n", **(&j));
    return 0;
}