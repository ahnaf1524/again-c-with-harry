#include <stdio.h>
#include <string.h>
// structure define outside the main()
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1; // structure variable
    // e1.name = "jhankar"; not possible. C does not allow to reassign variable string data.
    strcpy(e1.name, "jhankar"); // this is the right way
    e1.code = 147;
    e1.salary = 4700.47;
    printf("%s %f %d\n", e1.name, e1.salary, e1.code);
    return 0;
}