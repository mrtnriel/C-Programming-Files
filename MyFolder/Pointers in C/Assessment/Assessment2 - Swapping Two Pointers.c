// Activity 3

#include <stdio.h>

void swapPointers(int **ptrA, int **ptrB) { // Function to swap two integer pointers
	
    int *temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    
}

int main() {
	
    int var1 = 10, var2 = 20;
    int *ptrA = &var1;
    int *ptrB = &var2;

    printf("Before swap:\n");
    printf("ptrA points to value: %d\n", *ptrA);
    printf("ptrB points to value: %d\n", *ptrB);

    swapPointers(&ptrA, &ptrB);  // Pass addresses of pointers to swap them

    printf("After swap:\n");
    printf("ptrA points to value: %d\n", *ptrA);
    printf("ptrB points to value: %d\n", *ptrB);

    return 0;
    
}
