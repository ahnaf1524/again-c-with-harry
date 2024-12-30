#include <stdio.h>
int main()
{
    int arr[3] = {17, 21, 37};
    int *ptr = &arr[0];
    ptr += 2;
    printf("3rd element is %d\n", arr[2]);
    printf("Pointing to 3rd element because %ld\n", *ptr);
    return 0;
}