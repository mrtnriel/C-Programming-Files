#include <stdio.h>

int main() {
    int n;

    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n]; 
    int evenCount = 0, oddCount = 0;

   
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);

        
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    
    printf("The Even elements are:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    
    printf("The Odd elements are:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

