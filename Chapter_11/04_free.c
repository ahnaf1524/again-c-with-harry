#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d\n", ptr[0]);
    free(ptr);            // when i work small chip
    printf("%d", ptr[0]); // garbage because
    return 0;
}