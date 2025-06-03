#include <stdio.h>

int main() {
    int accountType;
    float withdrawalAmount;
    float currentBalance;

    // For this example, let's assume the current balance is entered by the user
    printf("Enter current account balance: ");
    scanf("%f", &currentBalance);

    printf("Enter account type (1 for Savings, 2 for Current): ");
    scanf("%d", &accountType);

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawalAmount);

    if (accountType == 1) { // Savings Account
        if (withdrawalAmount > 10000) {
            printf("Withdrawal Denied: Maximum limit for Savings account is 10000.\n");
        }
        else if ((currentBalance - withdrawalAmount) < 1000) {
            printf("Withdrawal Denied: Minimum balance of 1000 must remain after withdrawal.\n");
        }
        else {
            printf("Withdrawal Approved.\n");
        }
    }
    else if (accountType == 2) { // Current Account
        if (withdrawalAmount > 25000) {
            printf("Withdrawal Denied: Maximum limit for Current account is 25000.\n");
        }
        else {
            printf("Withdrawal Approved.\n");
        }
    }
    else {
        printf("Invalid account type! Please enter 1 or 2.\n");
    }

    return 0;
}
