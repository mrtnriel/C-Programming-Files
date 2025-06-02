#include <stdio.h>

int main() {
    int movies, ratings;

    printf("Enter the number of movies: ");
    scanf("%d", &movies);
    printf("Enter the number of ratings per movie: ");
    scanf("%d", &ratings);

    int movieRatings[movies][ratings];

    for (int i = 0; i < movies; i++) {
        printf("Movie %d:\n", i + 1);
        for (int j = 0; j < ratings; j++) {
            printf("Enter rating %d: ", j + 1);
            scanf("%d", &movieRatings[i][j]);
        }
    }

    printf("\nMovie ratings and averages:\n");
    for (int i = 0; i < movies; i++) {
        double sum = 0;
        printf("Movie %d: ", i + 1);
        for (int j = 0; j < ratings; j++) {
            printf("%d ", movieRatings[i][j]);
            sum += movieRatings[i][j];
        }
        printf("| Average: %.2f\n", sum / ratings);
    }

    return 0;
}

