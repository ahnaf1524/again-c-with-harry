#include <stdio.h>
#include <string.h>
int main()
{
    // Get string length
    char st[] = "phitron course"; // double quotes string cannot be reassigned
    printf("%d\n", strlen(st));   // count length of string excluding null character
    // String Copy Operarion
    char source[] = "Phitron with CSE Fundamentals!";
    char target[80]; // target should enough capacity to store string
    strcpy(target, source);
    printf("%s , %s\n", source, target);
    // string concat operation
    char massage1[50] = "I am determined"; // not can be space after line ending
    char massage2[60] = " I am hard working!";
    strcat(massage1, massage2); // concat and store in first char variable
    printf("%s %s\n", massage1, massage2);

    // String compare
    int a = strcmp("far", "far");   // 0
    int b = strcmp("far", "joke");  // negative
    int c = strcmp("joke", "far");  // positive
    int c = strcmp("joke", "|far"); // negative
    printf("%d , %d , %d\n", a, b, c);
    return 0;
}
// strcmp
// if first string ascii code is less than second string ascii code returns -1 (Negative value)
// if first string ascii code is greater than second string ascii code returns 1 (Postive Value)