#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("ahnaf.txt", "r");
    // error throw : if file is not exits
    if (ptr == NULL)
    {
        printf("The file does no exits sorry!\n");
    }
    else
    {
        int num;
        // first time programs run print 16
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        // second time programs run value change to 20
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        fclose(ptr);
    }

    return 0;
}
// why not I get 16 and after again programs run not get 20