#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You cannot drive\n");
    }
    else if (age >= 18 && age < 60)
    {
        printf("You can drive\n");
    }
    else if (age <= 60 || age >= 60)
    {
        printf("You can drive also you are a senior citizen\n");
    }
    else
    {
        printf("Invalid input given");
    }
    return 0;
}