#include <stdio.h>
struct Book
{
    int id;
    char title[50];
    float price;
};
int main()
{
    struct Book library[2] =
        {
            {101, "Introduction to C", 299.99},
            {102, "Competitive Programmers Handbook", 330.00},
        };
    // point
    struct Book *ptr = library;
    printf("Library Books\n");
    printf("================\n");
    for (int i = 0; i < 2; ++i)
    {
        printf("Book %d:\n", i + 1);
        printf(" ID: %d\n", (ptr + i)->id);
        printf(" Title: %s\n", (ptr + i)->title);
        printf(" Price: %.2f\n", (ptr + i)->price);
    }
    // always use arrow operation instead of .
    return 0;
}