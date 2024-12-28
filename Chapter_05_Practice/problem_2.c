#include <stdio.h>
float celsiusToFahrenheit(float);
float celsiusToFahrenheit(float c)
{
    float f = (c * 9 / 5) + 32;
    return f;
}
int main()
{
    float celsius;
    scanf("%f", &celsius);
    float convertValue = celsiusToFahrenheit(celsius);
    printf("%.2f celsius is %.2f fahrenheit\n", celsius, convertValue);
    return 0;
}