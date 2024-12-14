#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an character from keyboard : ");
    scanf("%c", &ch);
    int asciiVal = ch;
    if (asciiVal >= 65 && asciiVal <= 90)
    {
        printf("You have entered an uppercase character!\n");
    }
    else if (asciiVal >= 97 && asciiVal <= 122)
    {
        printf("You have entered an lowercase character!\n");
    }
    else
    {
        printf("%c is invalid input.\n", ch);
    }
    return 0;
}