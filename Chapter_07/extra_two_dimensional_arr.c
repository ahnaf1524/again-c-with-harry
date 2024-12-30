#include <stdio.h>
int main()
{
    // datatype arr_name[row][cols]
    // Declaration and initialization of 2D arrays
    int arr[3][2] = {{1, 4}, {7, 9}, {11, 12}};
    // modifying 2D arrays
    arr[0][1] = 42;
    arr[1][0] = 99;
    // Iterate 2D arrays
    printf("2D Array Elements:\n");
    for (int i = 0; i < 3; ++i) //  Loop through rows
    {
        for (int j = 0; j < 2; ++j) // Loop through columns
        {
            printf("arr [%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}

// A multidimensional array is essentially an array of arrays. The most commonly used type is a 2D array, which can be visualized as a table with rows and columns. You can also have arrays with more than two dimensions, though they are less frequently used.

/** KeyPoints
 * Elements are accessed using two indices: one for the row and one for the column (arr[row][column]).
 * Nested loops are useful for iterating through all elements of a 2D array.
 * You can modify elements directly by assigning new values to specific indices.
 */