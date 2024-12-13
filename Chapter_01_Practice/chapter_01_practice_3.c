#include <stdio.h>
int main()
{
    float centigrade;
    scanf("%f", &centigrade);
    float fahrenheit = (centigrade * 9 / 5) + 32;
    printf("Fahrenheit value is %f\n", fahrenheit);
    return 0;
}