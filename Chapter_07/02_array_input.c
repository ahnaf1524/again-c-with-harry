#include <stdio.h>
int main()
{
    // Reserves space for 5 integer below
    int marks[5]; // we wanna to store 5 students marks
    // taking input from user
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &marks[i]);
    }
    // print all elements of the array
    for (int i = 0; i < 5; ++i)
    {
        printf("%d : %d\n", i, marks[i]);
    }
    return 0;
}