#include <stdio.h>

void displayArrayElements(int arr[], int size);
void displayArrayElements(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("Element at index %d: Value = %d, Memory Address = %u\n", i, arr[i], (void *)&arr[i]);
    }
}

int main()
{
    int marks[5];
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &marks[i]);
    }
    displayArrayElements(marks, 5);
    return 0;
}
// An array is allocated contiguous memory during its declaration phase, with a fixed size.
