#include <stdio.h>
int main()
{
    // ==== Sequence Control ======
    // int a = 10;
    // int b = 20;
    // int sum = a + b;
    // printf("Sum is %d\n", sum);
    // ==== Decision Control ======
    // int num = 10;
    // if (num > 5)
    // {
    //     printf("Number is greater than 5\n");
    // }
    // ==== Decision Control(b) ======
    // int num = 10;
    // if (num % 2 == 0)
    // {
    //     printf("Even\n");
    // }
    // else
    // {
    //     printf("Odd\n");
    // }
    // ==== Decision Control with else-if ladder ======
    // int num = 10;
    // if (num < 0)
    // {
    //     printf("Negative number.\n");
    // }
    // else if (num == 0)
    // {
    //     printf("Zero.\n");
    // }
    // else
    // {
    //     printf("Positive number.\n");
    // }
    // Loop Control Instructions (for..loops)
    // for (int i = 1; i <= 5; i++)
    // {
    //     printf("%d\n", i);
    // }
    // Loop Control Instructions (while loops)
    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }
    // Loop Control Instructions (do..while loops)
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    // Case Control Instructions
    int day = 3;
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    default:
        printf("Weekend\n");
    }
    return 0;
}