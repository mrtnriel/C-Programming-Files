// sum of numbers

#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    do {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    } while (i <= 100);

    printf("The sum of all numbers between 1 and 100 divisible by 3 is: %d\n", sum);

    return 0;
}
