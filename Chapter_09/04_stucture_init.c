#include <stdio.h>
struct employee
{
    int id;
    float salary;
    char name[30];
};
struct Student
{
    int id;
    char name[30];
    float grades[5];
};
int main()
{
    struct employee alice = {100, 71.22, "alice"};
    struct employee bob = {0};

    printf("Employee Alice : \n");
    printf("ID : %d , salary: %.2f , name : %s\n", alice.id, alice.salary, alice.name); // Corrected order
    printf("Employee Bob : \n");
    printf("ID : %d , salary: %.2f , name : %s\n", bob.id, bob.salary, bob.name); // Corrected order
    struct Student john =
        {
            101,
            "John Doe",
            {85.5, 90.0, 78.0, 88.5, 92.0},
        };
    printf("Student Details:\n");
    printf("Student ID : %d\n", john.id);
    printf("Student Name : %s\n", john.name);
    printf("%s\'s all grades below - \n", john.name);
    for (int i = 0; i < 5; ++i)
    {
        printf("%.2f ", john.grades[i]);
    }
    printf("\n");
    return 0;
}
