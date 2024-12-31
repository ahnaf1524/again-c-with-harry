#include <stdio.h>
int main()
{
    FILE *fptr;
    int num;
    printf("Enter the number for multiplication table : ");
    scanf("%d", &num);
    fptr = fopen("problem2.txt", "w");
    if (fptr == NULL)
    {
        printf("Error Opening file.\n");
        return 1;
    }
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d x %d = %d\n", num, i, num * i);
    }
    // close the file
    fclose(fptr);
    printf("Multiplication table written to the file");
    return 0;
}