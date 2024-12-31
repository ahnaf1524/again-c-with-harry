#include <stdio.h>
int main()
{
    // '\0' mark ending of string (collection of character)
    // char st[] = {'a', 'b', 'c', '\0'};
    // When we use double quotes like the below null character place at the end of value by default
    char st[] = "cse"; // same as doing char st[] = {'a', 'b', 'c', '\0'}
    // printf("First character is %c\n", st[0]);
    for (int i = 0; i < 3; ++i)
    {
        printf("Character is %c \n", st[i]);
    }
    return 0;
}