#include <stdio.h>

int main() {
	
    // Declare variables
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    // Declare pointers for each variable
    int *ptr_m = &m;
    float *ptr_fx = &fx;
    char *ptr_cht = &cht;

    // Print values of variables
    printf("Pointer: Demonstrate the use of & and * operator:\n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    // Using & operator to print addresses
    printf("\nUsing & operator:\n");
    printf("address of m = %p\n", (void *)&m);
    printf("address of fx = %p\n", (void *)&fx);
    printf("address of cht = %p\n", (void *)&cht);

    // Using & and * operator to print values at addresses
    printf("\nUsing & and * operator:\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    // Using pointer variables to print addresses
    printf("\nUsing only pointer variable:\n");
    printf("address of m = %p\n", (void *)ptr_m);
    printf("address of fx = %p\n", (void *)ptr_fx);
    printf("address of cht = %p\n", (void *)ptr_cht);

    // Using pointer operator to print values at addresses
    printf("\nUsing only pointer operator:\n");
    printf("value at address of m = %d\n", *ptr_m);
    printf("value at address of fx= %f\n", *ptr_fx);
    printf("value at address of cht= %c\n", *ptr_cht);

    return 0;
    
}
