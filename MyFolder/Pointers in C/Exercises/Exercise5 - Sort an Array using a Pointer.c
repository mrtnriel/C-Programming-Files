#include <stdio.h>

// Function to swap two elements using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array using bubble sort and pointers
void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If current element is greater than the next element, swap them
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

// Function to print the array using pointers
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("element - %d: %d\n", i + 1, *(arr + i));
    }
}

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
        printf("element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sortArray(arr, n);

    // Print the sorted array
    printf("The elements in the array after sorting:\n");
    printArray(arr, n);

    return 0;
}
