#include <stdio.h>
int countPositive(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
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
    int ans = countPositive(arr, n);
    printf("%d positive integers found in your array\n", ans);
    return 0;
}