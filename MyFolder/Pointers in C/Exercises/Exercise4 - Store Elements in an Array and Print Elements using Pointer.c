#include <stdio.h>

int main() {
	
    int n;

    // Input the number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    // Declare an array to store the elements
    int arr[n];

    // Input elements into the array
    printf("Input %d number of elements in the array:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Declare a pointer to the first element of the array
    int *ptr = arr;

    // Print the elements using the pointer
    printf("The elements you entered are:\n");
    
    for (int i = 0; i < n; i++) {
        printf("element - %d: %d\n", i, *ptr);
        // Increment the pointer to point to the next element
        ptr++;
    }

    return 0;
    
}