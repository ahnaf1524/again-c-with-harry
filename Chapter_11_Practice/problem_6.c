#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initially allocate an array of 5 integers using calloc (initialized to 0)
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter 5 integers: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Use realloc to resize the array to 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Now enter 5 more integers
    printf("Now Enter more 5 integers: \n");
    for (int i = 5; i < 10; ++i)
    { // Corrected loop to fill the remaining part of the array
        scanf("%d", &arr[i]);
    }

    printf("You Entered: ");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Best practice to free memory
    return 0;
}
