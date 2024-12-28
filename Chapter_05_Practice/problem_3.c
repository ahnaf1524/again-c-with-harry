#include <stdio.h>
float forceAttraction(float, float);
float forceAttraction(float m, float g)
{
    float f = m * g;
    return f;
}
int main()
{
    float mass;
    scanf("%f", &mass);
    const float G = 9.8;
    float result = forceAttraction(mass, G);
    printf("Force attraction is %.2f m/s inverse 1", result);
    return 0;
}