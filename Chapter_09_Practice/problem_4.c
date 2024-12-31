#include <stdio.h>
typedef struct Vehicle
{
    char registration[20];
    char type[10];
    float fuelLevel;
} Vehicle;
int main()
{
    Vehicle vehicle[4] = {
        {"ABC1234", "Car", 45.5},
        {"XYZ9876", "Truck", 80.2},
        {"XYZ9876", "Motorcycle", 12.3},
        {"PQR7654", "Van", 30.3},
    };
    Vehicle *ptr = vehicle;
    printf("My Garage Vehicles Information\n");
    printf("================\n");
    for (int i = 0; i < 4; ++i)
    {
        printf("Vehicle %d:\n", i + 1);
        printf(" Registration : %s\n", (ptr + i)->registration);
        printf(" Type : %s\n", (ptr + i)->type);
        printf(" Fuel Level : %.2f\n", (ptr + i)->fuelLevel);
    }
    return 0;
}