#include <stdio.h>
int main()
{
    float principal, rate_of_interest;
    int time;
    printf("Enter the principal money  : ");
    scanf("%f", &principal);
    printf("Enter the interest rate : ");
    scanf("%f", &rate_of_interest);
    printf("Enter the time have : ");
    scanf("%d", &time);
    float simple_interest = principal * rate_of_interest * time;
    printf("Simple interest is %lf\n", simple_interest);
    return 0;
}