#include <stdio.h>
int main()
{
    FILE *fptr;
    char name1[50], name2[50];
    float salary1, salary2;
    printf("Enter the name and salary of first employee : ");
    scanf("%s %f", name1, &salary1);
    printf("Enter the name and salary of second employee : ");
    scanf("%s %f", name2, &salary2);
    fptr = fopen("employee_data.txt", "a");
    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fptr, "%s %.2f\n", name1, salary1);
    fprintf(fptr, "%s %.2f\n", name2, salary2);
    fclose(fptr);
    printf("Employee data written to file.\n");

    return 0;
}