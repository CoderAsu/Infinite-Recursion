/*
    WAP to calculate the salary of salesman where quantity and price are given from user and fixed basic of 15000, bonus of 200 and commission as 0.02 on both quantity and selling price.
*/

#include <stdio.h>

int main() {
    int quantity;
    float price, commission, total_salary;

    // Fixed components
    float basic_salary = 15000;
    float bonus = 200;

    // Input from user
    printf("Enter quantity sold: ");
    scanf("%d", &quantity);

    printf("Enter selling price per item: ");
    scanf("%f", &price);

    // Commission calculation
    commission = 0.02 * quantity + 0.02 * price;

    // Total salary
    total_salary = basic_salary + bonus + commission;

    // Output
    printf("Total salary of the salesman: %.2f rupees\n", total_salary);

    return 0;
}