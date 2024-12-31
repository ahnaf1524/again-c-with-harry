#include <stdio.h>
int main()
{
    FILE *ptr;
    // ptr = fopen("ahnaf.txt", "r");
    // char c = fgetc(ptr);
    // printf("%c", c);

    // ptr = fopen("ahnaf.txt", "w");
    // fputc('c', ptr);

    ptr = fopen("ahnaf.txt", "a");
    fputc('c', ptr);
    return 0;
}