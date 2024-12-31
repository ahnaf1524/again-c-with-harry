#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initially allocate an array of size 10 for the first 10 multiples
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill in the first 10 multiples of 7
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = 7 * (i + 1);
    }

    // Print the multiplication table for 7 up to 10 multiples
    printf("Multiplication table of 7 up to 10:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Use realloc to extend the array size to hold 15 multiples
    arr = (int *)realloc(arr, 15 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill in the next 5 multiples (11 to 15)
    for (int i = 10; i < 15; ++i)
    {
        arr[i] = 7 * (i + 1);
    }

    // Print the multiplication table for 7 up to 15 multiples
    printf("Multiplication table of 7 up to 15:\n");
    for (int i = 0; i < 15; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Best practice to free memory
    return 0;
}
