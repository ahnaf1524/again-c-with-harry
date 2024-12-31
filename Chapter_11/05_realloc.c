#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d\n", ptr[0]);
    // re allocate
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    return 0;
}