#include <stdio.h>
typedef struct Order
{
    int orderNumber;
    int tableNumber;
    float totalAmount;
    char customerName[50];
} RestaurantOrder; // most used
int main()
{
    // typedef struct Order RestaurantOrder; (not see most of the case but possible)
    RestaurantOrder order1 = {1, 10, 250.75, "Jhankar"};
    RestaurantOrder order2 = {1, 10, 250.75, "Rasel"};
    printf("Order Details : \n");
    // Order 1
    printf("Order 1: \n");
    printf("Order Number: %d\n", order1.orderNumber);
    printf("Table Number: %d\n", order1.tableNumber);
    printf("Total Amount: $%.2f\n", order1.totalAmount);
    printf("Customer Name: %s\n", order1.customerName);
    // Order 2
    printf("\nOrder 2: \n");
    printf("Order Number: %d\n", order2.orderNumber);
    printf("Table Number: %d\n", order2.tableNumber);
    printf("Total Amount: $%.2f\n", order2.totalAmount);
    printf("Customer Name: %s\n", order2.customerName);
    // add a tip
    order2.totalAmount += 50.00; // $50 tip
    printf("\nUpdated Order 2 Total Amount: $%.2f\n", order2.totalAmount);
    return 0;
}
// when use pointers in struct on that case we use arrow operator (->)
// rather we use .