//Student Management System

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NUM_SUBJECTS 5

// Define structure for student
struct Student {
    int id;
    char name[100];
    int age;
    char grade[20];
    int marks[NUM_SUBJECTS];
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void searchStudent(struct Student students[], int count);
void displayAllStudents(struct Student students[], int count);

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add a student\n");
        printf("2. Search for a student\n");
        printf("3. Display all students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                searchStudent(students, count);
                break;
            case 3:
                displayAllStudents(students, count);
                break;
            case 4:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}

// Function to add a student
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter student name: ");
    getchar(); // Clear buffer
    fgets(students[*count].name, sizeof(students[*count].name), stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0'; // Remove newline

    printf("Enter student age: ");
    scanf("%d", &students[*count].age);
    printf("Enter student grade: ");
    getchar(); // Clear buffer again
    fgets(students[*count].grade, sizeof(students[*count].grade), stdin);
    students[*count].grade[strcspn(students[*count].grade, "\n")] = '\0';

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &students[*count].marks[i]);
    }

    (*count)++;
    printf("Student added successfully!\n");
}

// Function to search for a student by ID
void searchStudent(struct Student students[], int count) {
    int id, found = 0;
    printf("Enter student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Details:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Grade: %s\n", students[i].grade);
            printf("Marks: ");
            for (int j = 0; j < NUM_SUBJECTS; j++) {
                printf("%d ", students[i].marks[j]);
            }
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}

// Function to display all students
void displayAllStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %s\n", students[i].grade);
        printf("Marks: ");
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\n\n");
    }
}
