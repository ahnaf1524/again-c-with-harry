#include <stdio.h>
int main()
{
    FILE *fptr;
    int num;
    fptr = fopen("number.txt", "r+");
    // r+ => read and write both
    if (fptr == NULL)
    {
        if (fptr = NULL)
        {
            printf("Error opening file.\n");
            return 1;
        }
    }
    fscanf(fptr, "%d", &num);
    num *= 2;
    fprintf(fptr, " %d", num);
    fclose(fptr);
    printf("File content modified to double the value.\n");
    return 0;
}