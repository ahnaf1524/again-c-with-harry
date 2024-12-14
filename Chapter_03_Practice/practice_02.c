#include <stdio.h>
int main()
{
    int chemistry_marks, physics_marks, higher_math_marks;
    printf("Enter the marks of Chemistry : ");
    scanf("%d", &chemistry_marks);
    printf("Enter the marks of Physics : ");
    scanf("%d", &physics_marks);
    printf("Enter the marks of Higher Math : ");
    scanf("%d", &higher_math_marks);
    int totalMarks = (chemistry_marks + physics_marks + higher_math_marks) / 3;
    if (chemistry_marks < 33 || physics_marks < 33 || higher_math_marks < 33 || totalMarks < 40)
    {
        printf("You are fail!\n");
    }
    else if (chemistry_marks >= 33 && physics_marks >= 33 && higher_math_marks >= 33 && totalMarks >= 40)
    {
        printf("Congrats! You are passed\n");
    }
    return 0;
}