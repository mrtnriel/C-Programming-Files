#include <stdio.h>

int main() {
    int n; 

    
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    float arr[n]; 

    
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%f", &arr[i]);
    }

    
    printf("The floating-point values stored into the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");


    printf("The floating-point values stored into the array in reverse are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

