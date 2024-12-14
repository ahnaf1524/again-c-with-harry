#include <stdio.h>
int main()
{
    // Use case --> 01 - input
    // int n;
    // scanf("%d", &n);
    // Use case --> 01
    // switch (n)
    // {
    // case 1:
    //     printf("Friday!\n");
    //     break;
    // case 2:
    //     printf("Saturday!\n");
    //     break;
    // case 3:
    //     printf("Sunday!\n");
    //     break;
    // case 4:
    //     printf("Monday!\n");
    //     break;
    // case 5:
    //     printf("Tuesday!\n");
    //     break;
    // case 6:
    //     printf("Thursday!\n");
    //     break;
    // case 7:
    //     printf("Wednesday!\n");
    //     break;
    // default:
    //     printf("%d is out of 7\n", n);
    // }
    // Use case --> 01 - input
    int a;
    printf("Enter an integer between 1-5 : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You have entered 1\n");
        break;
    case 2:
        printf("You have entered 2\n");
        break;
    case 3:
        printf("You have entered 3\n");
        break;
    case 4:
        printf("You have entered 4\n");
        break;
    case 5:
        printf("You have entered 5\n");
        break;
    default:
        printf("%d is out of the range\n", a);
    }
    return 0;
}