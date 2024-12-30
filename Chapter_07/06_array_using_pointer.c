#include <stdio.h>

void displayArrayElements(int arr[], int size);
void displayArrayElements(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("Element at index %d: Value = %d, Memory Address = %u\n", i, arr[i], (void *)&arr[i]);
    }
}
void printArr(int[], int);
void printArr(int arr[], int n) // another way to send array as parameter
{
    for (int i = 0; i < n; ++i)
    {
        printf("Value at %d index is %d\n", i, arr[i]);
    }
}
void printArrPtr(int *, int);
void printArrPtr(int *firstElement, int size) // a way to send array as parameter (Pass by ref)
{
    for (int i = 0; i < size; ++i)
    {
        printf("Value at %d index is %d\n", i, *firstElement);
        firstElement++;
    }
}
int main()
{
    int marks[5] = {84, 81, 59, 97, 88};
    // displayArrayElements(marks, 5);
    // int *ptr = &marks[0]; (same to the below)
    int *ptr = marks;
    // for (int i = 0; i < 5; ++i)
    // {
    //     // prints 84 ..... because ptr point to first element of marks
    //     // ptr points to marks[0]
    //     printf("The marks at index %d is %d\n", i, *ptr);
    // }
    printf("Prints whole using first element address\n");
    // printArrPtr(&marks[0], 5);
    printArrPtr(&marks[0], 5);
    return 0;
}

// If I have the address of the first element of an array (i.e., the address of arr[0]),
// I can access the values of other elements by incrementing the pointer.
// When a pointer points to arr[0] and I increment it (ptr++), it will point to arr[1],
// allowing me to access the value and address of arr[1], and so on.

// Absolutely, yes! If we pass the address of an array to a function, the function can directly modify the elements of the array. Because here we pass array as reference