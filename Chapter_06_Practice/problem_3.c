#include <stdio.h>
// void pointerReceiver(int *);
void tenTimeChange(int *);
void tenTimeChange(int *n)
{
    for (int i = 1; i <= 10; i *= 2)
    {
        *n = i;
        printf("%d time Value change! Value is %d\n", i, *n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    tenTimeChange(&n);
    return 0;
}
// void pointerReceiver(int *a)
// {
//     printf("From function address is %u", a);
// }
// Because we pass by ref
