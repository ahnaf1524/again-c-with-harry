#include <stdio.h>

int main()
{
    int rows = 3, cols = 2;
    int arr[rows][cols];
    // 2D array input
    for (int i = 0; i < rows; ++i)
    {
        // i ==> rows
        // j ==> cols
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter the value of arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // 2D array output
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}
