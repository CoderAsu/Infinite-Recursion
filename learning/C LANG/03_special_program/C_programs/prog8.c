// Q8. Discount/Bonus calculation based on condition.

#include <stdio.h>

int main() {
    int choice;
    float amount, discount = 0.0, bonus = 0.0;

    printf("Choose calculation type:\n");
    printf("1. Discount on Purchase\n");
    printf("2. Bonus for Employee\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter purchase amount in rupees: ");
            scanf("%f", &amount);

            if (amount >= 10000)
                discount = amount * 0.20;  // 20% discount
            else if (amount >= 5000)
                discount = amount * 0.10;  // 10% discount
            else
                discount = amount * 0.05;  // 5% discount

            printf("Discount: %.2f rupees\n", discount);
            printf("Final amount to pay: %.2f rupees\n", amount - discount);
            break;

        case 2:
            printf("Enter performance score (0 to 100): ");
            scanf("%f", &amount);  // Reusing 'amount' for score

            if (amount >= 90)
                bonus = 10000;  // Excellent
            else if (amount >= 75)
                bonus = 5000;   // Good
            else if (amount >= 50)
                bonus = 2000;   // Average
            else
                bonus = 0;      // No bonus

            printf("Bonus awarded: ₹%.2f\n", bonus);
            break;

        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

/*
    Output:

    Choose calculation type:
    1. Discount on Purchase
    2. Bonus for Employee
    Enter your choice (1 or 2): 1
    Enter purchase amount in rupees: 24521 
    Discount: 4904.20 rupees
    Final amount to pay: 19616.80 rupees
*/