#include <stdio.h>

int main() {
    int students, subjects;

    printf("Enter the number of students: ");
    scanf("%d", &students);
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    int grades[students][subjects];
    double sum[students];  

    printf("\n");
    for (int i = 0; i < students; i++) {
        sum[i] = 0;
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("Enter grade for subject %d: ", j + 1);
            scanf("%d", &grades[i][j]);
            sum[i] += grades[i][j]; 
        }
    }

    printf("\nStudent grades and averages:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("| Average: %.2f\n", sum[i] / subjects);  
    }

    return 0;
}

