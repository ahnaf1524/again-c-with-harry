#include <stdio.h>
int main()
{
    int arr[2][3][4];
    printf("Addresses of elements in increasing order:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                printf("Address of arr[%d][%d][%d] : %u\n", i, j, k, (void *)&arr[i][j][k]);
            }
        }
    }
    return 0;
}