//Employee Management System

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

//Define structure for employee
struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\nEmployee Management System\n");
        printf("Menu:\n");
        printf("1. Add an employee\n");
        printf("2. Display employee details\n");
        printf("3. Calculate average salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter employee name: ");
                    getchar(); // Clear newline from buffer
                    fgets(employees[count].name, sizeof(employees[count].name), stdin);
                    employees[count].name[strcspn(employees[count].name, "\n")] = '\0'; // Remove newline
                    printf("Enter employee salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully!\n");
                } else {
                    printf("Employee limit reached!\n");
                }
                break;

            case 2:
                printf("\nEmployee Details:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d\n", employees[i].id);
                    printf("Name: %s\n", employees[i].name);
                    printf("Salary: %.2f\n\n", employees[i].salary);
                }
                if (count == 0) {
                    printf("No employees to display.\n");
                }
                break;

            case 3: {
                if (count == 0) {
                    printf("No employees to calculate average salary.\n");
                    break;
                }
                float total = 0;
                for (int i = 0; i < count; i++) {
                    total += employees[i].salary;
                }
                printf("Average salary: %.2f\n", total / count);
                break;
            }

            case 4:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
