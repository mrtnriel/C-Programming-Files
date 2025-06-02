#include <stdio.h>

// Function to calculate the sum using call by reference
void addNumbers(int *num1, int *num2, int *sum) {
	
    *sum = *num1 + *num2; // Dereference pointers to perform addition
    
}

int main() {
	
    int num1, num2, sum;

    // Input
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);

    // Call the function to calculate the sum
    addNumbers(&num1, &num2, &sum);

    // Output
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
    
}