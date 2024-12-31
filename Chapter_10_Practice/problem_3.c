#include <stdio.h>

int main()
{
    FILE *fptr1, *fptr2;
    char ch;

    // Open the input file in read mode
    fptr1 = fopen("problem3-input.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open the output file in write mode (create or overwrite the file)
    fptr2 = fopen("problem3-output.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Error opening output file.\n");
        fclose(fptr1);
        return 1;
    }

    // Read each character from input file and write it twice to output file
    while ((ch = fgetc(fptr1)) != EOF)
    {
        fputc(ch, fptr2); // Write once
        fputc(ch, fptr2); // Write again
    }

    // Close the files
    fclose(fptr1);
    fclose(fptr2);

    printf("File content written twice to 'problem3-output.txt'.\n");

    return 0;
}
