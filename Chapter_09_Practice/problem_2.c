#include <stdio.h>
typedef struct Vector
{
    float x; // x - coordinate
    float y; // y - coordinate
} Vector;
// see the function below that vector as return
Vector sumVector(Vector v1, Vector v2)
{
    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    Vector v1 = {2.5, 3.0};
    Vector v2 = {4.0, 1.5};
    Vector result = sumVector(v1, v2);
    printf("Sum of Vectors: (%.2f, %.2f)\n", result.x, result.y);

    return 0;
}