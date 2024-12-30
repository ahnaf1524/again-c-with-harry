#include <stdio.h>
void reverse(int arr[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Enter the value of %d index : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        printf("Value at %d index is %d\n", i, arr[i]);
    }
    reverse(arr, n);
    printf("Reversed Array!\n");
    for (int i = 0; i < n; ++i)
    {
        printf("Value at %d index is %d\n", i, arr[i]);
    }
    return 0;
}