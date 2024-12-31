#include <stdio.h>
int main()
{
    char str[30];
    gets(str);
    printf("You write : %s", str);
    puts(str); // creates new line after print str
    printf(" Semester 1 start!");
    // Output :
    //  Phitron with cse fundamentals
    //   Semester 1 start!
    char name[30];
    printf("Enter your name : ");
    gets(name);
    printf("Good Morning! ");
    puts(name);
    // Output :
    // Enter your name : Ahnaf Tahmid
    // Good Morning! Ahnaf Tahmid
    return 0;
}
// Explore : why should not use gets instead use fgets? Tell chatgpt