#include <stdio.h>
int main()
{
    FILE *fptr;
    int num1, num2, num3;
    fptr = fopen("problem1.txt", "r");
    if (fptr == NULL)
    {
        printf("Error Opening file.\n");
    }
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("Read integers : %d , %d , %d\n", num1, num2, num3);
    fclose(fptr);
    return 0;
}