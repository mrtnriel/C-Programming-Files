#include <stdio.h>

int main() {
    int temperature;
    char isRaining;

    // Prompt user input
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temperature);

    printf("Is it raining? (y/n): ");
    scanf(" %c", &isRaining); // note the space before %c to consume any leftover newline

    // Conditions and suggestions
    if (temperature < 10) {
        if (isRaining == 'y' || isRaining == 'Y') {
            printf("Suggested outfit: Wear a heavy coat and bring an umbrella.\n");
        } else {
            printf("Suggested outfit: Wear a heavy coat.\n");
        }
    } else if (temperature >= 10 && temperature <= 20) {
        if (isRaining == 'y' || isRaining == 'Y') {
            printf("Suggested outfit: Wear a sweater and bring an umbrella.\n");
        } else {
            printf("Suggested outfit: Wear a sweater.\n");
        }
    } else { // temperature > 20
        if (isRaining == 'y' || isRaining == 'Y') {
            printf("Suggested outfit: Wear light clothes and bring an umbrella.\n");
        } else {
            printf("Suggested outfit: Wear light clothes.\n");
        }
    }

    return 0;
}
