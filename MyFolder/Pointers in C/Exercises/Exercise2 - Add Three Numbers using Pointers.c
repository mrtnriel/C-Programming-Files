#include <stdio.h>

int main() {
	
    int num1, num2, num3, sum;
    int *ptr1, *ptr2, *ptr3;

    // Input
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    printf("Input the third number: ");
    scanf("%d", &num3);

    // Assign addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    // Calculate sum using dereferenced pointers
    sum = *ptr1 + *ptr2 + *ptr3;

    // Output
    printf("The sum of the numbers entered is: %d\n", sum);

    return 0;
    
}
