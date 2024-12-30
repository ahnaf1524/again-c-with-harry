#include <stdio.h>
void printArr(int[], int);
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Value at %d index is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // 1 . Addition of a number to a pointer
    // printArr(arr, 3);
    // int *ptr = arr; // Points to the first element of the array
    // printf("Original Pointer address : %u\n", ptr);
    // ptr += 1; // this addition also change array element in pointed array index
    // printf("Pointer after addition: %u\n", ptr);
    // printf("Value at new pointer: %d\n", *ptr); // 30
    // printArr(arr, 3);

    // 2.  Subtraction of a Number from a Pointer
    // int *ptr = &arr[2];
    // printf("Original pointer address: %u\n", ptr);
    // ptr -= 1; // Move backward by 1 * sizeof(int)
    // printf("Pointer after subtraction: %u\n", ptr);
    // // Why below code produce 377
    // printf("Value at new pointer: %d\n", *ptr); // 20
    // printArr(arr, 3);

    // 3. Subtraction of One Pointer from Another
    // printArr(arr, 5);
    // int *ptr1 = &arr[1];
    // int *ptr2 = &arr[4];
    // printf("Pointer 1 address: %u\n", ptr1);
    // printf("Pointer 2 address: %u\n", ptr2);
    // printf("Difference: %ld\n", ptr2 - ptr1);

    // 4. Comparison of Two Pointer Variables
    // int *ptr1 = &arr[1];
    // int *ptr2 = &arr[3];
    // if (ptr1 < ptr2)
    // {
    //     printf("Pointer 1 is before Pointer 2\n");
    // }
    // else
    // {
    //     printf("Pointer 1 is after Pointer 2\n");
    // }
    return 0;
}

/**
 * 1. Addition a number to a pointer
 * 2. Substraction a number from a pointer
 * 3. Substraction one pointer from another
 * 4. Comparison of two pointer variables
 */