#include <stdio.h>
typedef struct Vector
{
    float x; // x - coordinate
    float y; // y - coordinate
} Vector;
int main()
{
    Vector v = {3.5, 4.2};
    printf("Vector : (%.2f , %.2f)\n", v.x, v.y);
    return 0;
}