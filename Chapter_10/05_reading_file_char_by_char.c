#include <stdio.h>
int main()
{
    // EOF --> End of file
    char ch;
    FILE *ptr;
    ptr = fopen("ahnaf.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }
    return 0;
}