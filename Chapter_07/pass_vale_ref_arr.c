#include <stdio.h>

// Explicit Pointer use for Pass by Reference
void print2DArray1(int *arr, int rows, int cols)
{
    // 2D arrays stores in a row major order
    // arr[0][0]
    // arr[0][1]
    // arr[0][2]
    // then
    // arr[1][0]
    // arr[1][1]
    // arr[1][2]
    // so on .. so on ...

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", *(arr + i * cols + j)); // Access using pointer arithmetic
        }
        printf("\n");
    }
    // Here, array is explicitly a pointer to the first element of the 2D array.
    // Operations like *(arr + i * cols + j) use pointer arithmetic to access elements.
}

// Pass by Reference: Using Array Syntax
void print2DArray2(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Here, arr[rows][cols] is syntax sugar to describe the dimensions but still decays to a pointer internally.
}

// Simulating Pass by Value (Copying Array)
void copyAndPrint2DDisplay(int rows, int cols, int arr[rows][cols])
{
    int copiedArray[rows][cols]; // local scope array
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            copiedArray[i][j] = arr[i][j];
        }
    }
    printf("Copied Array!\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", copiedArray[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Define a 2D array with some values
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Call the function that uses pointer arithmetic for accessing the array elements
    printf("Using Pointer Arithmetic (Pass by Reference):\n");
    print2DArray1((int *)arr, 3, 3); // Cast the 2D array to a 1D pointer

    // Call the function that uses array syntax to display the 2D array
    printf("\nUsing Array Syntax (Pass by Reference):\n");
    print2DArray2(3, 3, arr);

    // Call the function that simulates pass by value by copying the array
    printf("\nSimulating Pass by Value (Copying the Array):\n");
    copyAndPrint2DDisplay(3, 3, arr);

    return 0;
}

// Understanding Pass by Reference vs Pass by Value for Arrays
// Arrays in C Always Decay to Pointers
// When you pass an array to a function in C, you're actually passing a pointer to the first element of the array. This means the function operates on the same memory as the original array, making changes directly reflect in the caller.

// Why the Provided Examples are Pass by Reference ?

// Pointer Version (void print2DArrayPointer)
// This function explicitly uses a pointer to access the array elements. By passing the pointer, you're referencing the original array's memory, which is inherently pass by reference.
// Array Parameter Version (void print2DArray)
// Even though it appears you're passing the "array" itself, you're still passing a reference (or pointer) to the array. The syntax int arr[rows][cols] is a more descriptive way to define a parameter for a 2D array but still refers to the same memory.
// Why True Pass by Value is Not Possible for Arrays ?
// C does not support true pass by value for arrays because:

// Arrays cannot be directly copied into a function's parameter list.
// If you need pass by value behavior, you must explicitly copy the array into another array within the function.