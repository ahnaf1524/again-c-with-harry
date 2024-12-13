#include <stdio.h>
int main()
{
    float radius, height;
    scanf("%f %f", &radius, &height);
    float radiusSquare = radius * radius;
    printf("Volume of cylinder is %f\n", 3.14159 * radiusSquare * height);
    return 0;
}