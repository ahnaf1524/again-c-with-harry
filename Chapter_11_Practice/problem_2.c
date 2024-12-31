#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(6 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 6 integers: \n");
    for (int i = 0; i < 6; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("You Entered: \n");
    for (int i = 0; i < 6; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Best practice to free memory
    return 0;
}
