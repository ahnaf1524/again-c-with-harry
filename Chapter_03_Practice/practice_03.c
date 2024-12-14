#include <stdio.h>
int main()
{
    long long income;
    printf("Enter your annual income : ");
    scanf("%lld", &income);
    long long tax = 0;
    if (income <= 250000)
    {
        printf("Your income tax is %lld\n", tax);
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
        printf("Your income tax is %lld\n", tax);
    }
    else if (income <= 1000000)
    {
        long long slab1 = 250000 * 0.05;
        long long slab2 = (income - 500000) * 0.2;
        tax = slab1 + slab2;
        printf("Your income tax is %lld\n", tax);
    }
    else
    {
        long long slab1 = 250000 * 0.05;
        long long slab2 = 500000 * 0.2;
        long long slab3 = (income - 1000000) * 0.3;
        tax = slab1 + slab2 + slab3;
        printf("Your income tax is %lld\n", tax);
    }
}