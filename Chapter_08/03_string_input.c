#include <stdio.h>
int main()
{
    int str[4];       // can receive 3 character because 4th character is null
    scanf("%s", str); // taking input
    printf("You have entered %s\n", str);
    return 0;
}