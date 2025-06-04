/*

Activity 1: E-commerce Discount Calculator

Write a program that calculates the discount for an e-commerce transaction based on the amount spent and
the customer type (Regular, Silver, or Gold).

Requirements:

1. Prompt the user to enter the amount spent and customer type:
Customer type codes:

float amountSpent

int customerType (1-3)

1 for Regular
2 for Silver
3 for Gold

2. Apply discounts based on the following rules:

Gold customers: 20% discount if they spend over 5000.
Silver customers: 15% discount if they spend over 3000.
Regular customers: 10% discount if they spend over 1000.

3. Print the original amount, discount applied, and final amount after the discount.

*/

#include <stdio.h>

int main (){

    //initialization of variables

    int customerType;//for customer type

    double originalAmount, discountApplied = 0, finalAmount; //for original amount, discount and final amount

    printf ("Welcome!\n");


    //request user input

    printf ("Enter Customer Type: ");
    scanf ("%d", &customerType);

    if (customerType < 1 || customerType > 3){
        printf ("Invalid Input! Run the Code Again!");
        return 1;
    }

    printf ("Enter Original Amount: ");
    scanf ("%lf", &originalAmount);


    //regular

    if (customerType == 1){
        if (originalAmount >= 1000){
            printf ("\n");
            printf ("You are a Regular Customer! Congrats! You have a 10%% Discount\n");
            discountApplied = originalAmount * 0.10;
        } else {
            printf ("You have not met the required amount! No Discount Applied!\n");
        }
    }


    //silver

    if (customerType == 2){
        if (originalAmount >= 3000){
            printf ("\n");
            printf ("You are a Silver Customer! Congrats! You have a 15%% Discount\n");
            discountApplied = originalAmount * 0.15; 
        } else {
            printf ("You have not met the required amount! No Discount Applied!\n");            
        }
    }


    //gold

    if (customerType == 3){
        if (originalAmount >= 5000){
            printf ("\n");
            printf ("You are a Gold Customer! Congrats! You have a 20%% Discount\n");
            discountApplied = originalAmount * 0.20; 
        } else {
            printf ("You have not met the required amount! No Discount Applied!\n");            
        }
    }


    //final amount

    finalAmount = originalAmount - discountApplied;

    //output1

    printf ("\n");
    
    printf ("Original Amount: %.2lf\n", originalAmount);

    printf ("Discount Applied: %.2lf\n", discountApplied);

    printf ("Final Amount: %.2lf\n", finalAmount);

    printf ("\n");

    printf ("thank you for shopping!\n");
    
    return 0;

}
