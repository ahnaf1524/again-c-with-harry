#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
    char department[30];
};
int main()
{
    int numEmployees;
    printf("Enter the number of employees : ");
    scanf("%d", &numEmployees);
    struct Employee employees[numEmployees];
    for (int i = 0; i < numEmployees; ++i)
    {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("ID : ");
        scanf("%d", &employees[i].id);

        printf("Name : ");
        getchar();
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
        printf("Salary : ");
        scanf("%f", &employees[i].salary);
        printf("Department : ");
        getchar();
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = '\0';
    }
    printf("\n Employee Details : \n");
    printf("------------------------------\n");
    for (int i = 0; i < numEmployees; ++i)
    {
        printf("Employee %d : \n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name : %s\n", employees[i].name);
        printf("Salary : %.2f\n", employees[i].salary);
        printf("Department: %s\n", employees[i].department);
        printf("--------------------------------------------------\n");
    }
    return 0;
}