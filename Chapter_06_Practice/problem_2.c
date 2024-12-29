#include <stdio.h>
void pointerReceiver(int *);

int main()
{
    int i = 14;
    printf("The address of i is %u\n", &i);
    pointerReceiver(&i);
    return 0;
}
void pointerReceiver(int *a)
{
    printf("From function address is %u", a);
}
// Because we pass by ref
