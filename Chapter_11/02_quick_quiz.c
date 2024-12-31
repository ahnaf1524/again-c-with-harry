#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 14.2;
    ptr[1] = 14.5;
    ptr[2] = 14.6;
    ptr[3] = 12.6;
    ptr[4] = 82.6;
    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}

// malloc and calloc are same empty malloc value is garbage collection whereas calloc empty values are 0