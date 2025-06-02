#include <stdio.h>

int main() {
    
    int Numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(Numbers) / sizeof(Numbers[0]);
    int sum = 0; 

    for (int i = 0; i < size; i++) {
        if (Numbers[i] % 2 == 0) { 
            sum += Numbers[i];
        }
    }

    printf("The sum of the even numbers is: %d\n", sum);

    return 0;
}

