#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)calloc(6, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Array created successfully!\n");
    free(arr); // Best practice to free memory
    return 0;
}
