#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;
    // allocate dynamically memory for int pointers
    ptr = (int *)malloc(n * sizeof(int)); // allowed and best practice
    // int arr[n]; // Not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d\n", ptr[0]);
    return 0;
}