#include <stdio.h>
int main()
{
    FILE *fptr;
    // fptr = fopen("ahnaf.txt", "w");  // Opens the file in write mode.
    // This will erase the existing content of the file and start fresh with new data.

    fptr = fopen("ahnaf.txt", "a"); // Opens the file in append mode.
    // In this mode, new data is written at the end of the existing content without erasing the previous data. If the file doesn't exist, it will be created.

    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}

// write mode first of all remove all of the targeted file and write on it