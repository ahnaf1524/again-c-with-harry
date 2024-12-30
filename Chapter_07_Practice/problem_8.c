#include <stdio.h>
int main()
{
    int numbers[3];
    printf("Enter 3 integers to see their multiplication tables: ");
    scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);
    int arr[3][10];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            arr[i][j] = numbers[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}