// factorial calculcation

#include <stdio.h>

int main() {
    int integer;
    unsigned long long factorial = 1;
    int i = 1;

    printf("Enter an Integer: ");
    scanf("%d", &integer);

    if (integer < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= integer) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %llu\n", integer, factorial);
    }

    return 0;
}
