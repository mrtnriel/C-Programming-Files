// temperature conversion tool

// temperature conversion tool

#include <stdio.h> 

int main () {
    
    double fahrenheit, celsius;
    char choice;

    do {
        printf("Enter temperature (in Celsius): ");
        scanf("%lf", &celsius);

        fahrenheit = (9.0 / 5.0 * celsius) + 32;

        printf("Celsius to Fahrenheit: %.2lf\n", fahrenheit);

        // Ask if the user wants to continue
        printf("Do you want to convert another temperature? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume leftover newline

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended.\n");

    return 0;

}

