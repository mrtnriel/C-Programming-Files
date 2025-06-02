// Activity 1

#include <stdio.h>

int main() {
	
    // Declare and initialize array
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Declare pointer to first element
    int *ptr = arr; 
    
    // Print third element using pointer arithmetic
    printf("Third element: %d\n", *(ptr + 2)); 
    
    // Increment pointer by 2 positions
    ptr += 2; 
    
    printf("After +2 increment: %d\n", *ptr); 
    
    // Modify value at current position
    (*ptr)--; 
    
    printf("After decrement: %d\n", *ptr); 
    
    // Reset to first element
    ptr = arr; 
    
    printf("First element: %d\n", *ptr); 
    
    return 0;
    
}
