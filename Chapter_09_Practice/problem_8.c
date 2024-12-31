#include <stdio.h>
typedef struct BankAccount
{
    char accountNumber[20];
    char customerName[50]; // Corrected field name
    float balance;
    char accountType[15];
    char ifscCode[15]; // Corrected field name
} BankAccount;

int main()
{
    BankAccount customer = {
        "123456789012",
        "John Doe",
        1500.75,
        "Savings",
        "IFSC00123"};

    printf("Account Details:\n");
    printf("Account Number: %s\n", customer.accountNumber);
    printf("Customer Name: %s\n", customer.customerName); // Corrected field name
    printf("Balance: $%.2f\n", customer.balance);
    printf("Account Type: %s\n", customer.accountType);
    printf("IFSC Code: %s\n", customer.ifscCode); // Corrected field name

    return 0;
}
