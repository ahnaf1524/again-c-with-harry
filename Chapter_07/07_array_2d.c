#include <stdio.h>
int main()
{
    int arr[3][2];
    //  2d array input
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("Enter value of arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // 2D array output
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}