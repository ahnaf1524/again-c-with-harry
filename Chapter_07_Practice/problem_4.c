#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];
    // store 5 multiple table in an array
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = n * (i + 1);
    }
    // print
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}