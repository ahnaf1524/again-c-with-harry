#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    int *j = &i;
    int **k = &j;
    printf("Value of i is %d\n", i);
    printf("Value of i using ptr is %d\n", *j);
    printf("Value of i using ptr to ptr is %d\n", **k);
    return 0;
}