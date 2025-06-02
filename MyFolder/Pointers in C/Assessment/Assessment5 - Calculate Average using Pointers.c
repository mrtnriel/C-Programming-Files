// Activity 5

#include <stdio.h>

int main() {
	
    int data[10];
    int *ptr = data;
    int sum = 0;
    float average;

    printf("Enter 10 integers:\n"); // Ask for User Input
    
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);  // Using pointer arithmetic to input
    }

    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);  // Using pointer arithmetic to sum
    }

    average = (float)sum / 10;
    printf("Average: %.2f\n", average);

    return 0;
    
}