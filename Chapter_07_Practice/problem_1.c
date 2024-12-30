#include <stdio.h>
int main()
{
    int arr[10] = {17, 21, 37, 46, 57, 60, 78, 85, 94, 13};
    int *ptr = &arr[0];
    ptr += 3;
    printf("Pointing to 3rd element because %ld\n", *ptr);
    return 0;
}