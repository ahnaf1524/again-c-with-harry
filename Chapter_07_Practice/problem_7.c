#include <stdio.h>
int main()
{
    int arr[3][10];
    for (int i = 0; i < 10; ++i)
    {
        arr[0][i] = 2 * (i + 1);
        arr[1][i] = 7 * (i + 1);
        arr[2][i] = 9 * (i + 1);
    }
    printf("Multiplication Table for 2:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("2 x %d = %d\n", i + 1, arr[0][i]);
    }
    printf("Multiplication Table for 7:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("7 x %d = %d\n", i + 1, arr[0][i]);
    }
    printf("Multiplication Table for 9:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("9 x %d = %d\n", i + 1, arr[0][i]);
    }

    return 0;
}