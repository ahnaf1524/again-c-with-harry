#include <stdio.h>
#include <string.h>
struct Student
{
    int rollNumber;
    char name[50];
    float marks[5];
    float average;
};
void calculateAverage(struct Student *student, int numSubjects)
{
    float sum = 0.0;
    for (int i = 0; i < numSubjects; ++i)
    {
        sum += student->marks[i];
    }
    student->average = sum / numSubjects;
}
void displayStudent(struct Student student, int numSubjects)
{
    printf("Student Details");
    printf("\n===================\n");

    printf("Roll Number : %d\n", student.rollNumber);
    printf("Name : %s\n", student.name);
    printf("Marks : [");
    for (int i = 0; i < numSubjects; ++i)
    {
        printf("%.2f ", student.marks[i]);
    }
    printf("]");
    printf("\nAverage Marks : %.2f\n", student.average);
}
int main()
{
    struct Student s1, s2, s3;
    printf("Enter your roll number : ");
    scanf("%d", &s1.rollNumber);
    // string input to struct
    printf("Enter your name : ");
    getchar();
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';
    printf("Enter marks for %d subjects \n ", 5);
    for (int i = 0; i < 5; ++i)
    {
        printf("Subject %d : ", i + 1);
        scanf("%f", &s1.marks[i]);
    }
    calculateAverage(&s1, 5);
    displayStudent(s1, 5);
    return 0;
}