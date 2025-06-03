#include <stdio.h>

int main() {
    float amountSpent;
    int customerType;
    float discountApplied = 0.0f;
    float finalAmount;

    // Prompt user input
    printf("Enter amount spent: ");
    scanf("%f", &amountSpent);

    printf("Enter Customer Type (1-Regular, 2-Silver, 3-Gold): ");
    scanf("%d", &customerType);

    // Check customer type and amount spent for discount eligibility
    if (customerType == 1) { // Regular
        if (amountSpent > 1000) {
            discountApplied = amountSpent * 0.10f;
            printf("You are a Regular Customer! You have a 10%% Discount.\n");
        } else {
            printf("You are a Regular Customer! No discount applied.\n");
        }
    }
    else if (customerType == 2) { // Silver
        if (amountSpent > 3000) {
            discountApplied = amountSpent * 0.15f;
            printf("You are a Silver Customer! You have a 15%% Discount.\n");
        } else {
            printf("You are a Silver Customer! No discount applied.\n");
        }
    }
    else if (customerType == 3) { // Gold
        if (amountSpent > 5000) {
            discountApplied = amountSpent * 0.20f;
            printf("You are a Gold Customer! You have a 20%% Discount.\n");
        } else {
            printf("You are a Gold Customer! No discount applied.\n");
        }
    }
    else {
        printf("Invalid Customer Type! Please enter 1, 2, or 3.\n");
        return 1; // Exit program due to invalid input
    }

    // Calculate final amount after discount
    finalAmount = amountSpent - discountApplied;

    // Print results
    printf("Original Amount: %.2f\n", amountSpent);
    printf("Discount Applied: %.2f\n", discountApplied);
    printf("Final Price after Discount: %.2f\n", finalAmount);

    return 0;
}
