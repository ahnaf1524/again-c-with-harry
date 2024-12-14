// Write a program to find grade of a student given his marks based on below :
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F

#include <stdio.h>
int main()
{
    int marks;
    printf("Entered your marks that you got : ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("You have got A\n");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("You have got B\n");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("You have got C\n");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("You have got D\n");
    }
    else if (marks >= 50 && marks <= 60)
    {
        printf("You have got E\n");
    }
    else
    {
        printf("You have got F\n");
    }
    return 0;
}