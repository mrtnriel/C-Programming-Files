#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int quantity;
} Product;

int main() {
    int maxProducts, choice, count = 0;
    printf("Enter max number of products: ");
    scanf("%d", &maxProducts);
    getchar();
    
    Product inventory[maxProducts];

    while (1) {
        printf("\n1. Add Product\n2. Update Quantity\n3. Show Inventory\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1 && count < maxProducts) {
            printf("Product name: ");
            fgets(inventory[count].name, MAX_NAME_LEN, stdin);
            inventory[count].name[strcspn(inventory[count].name, "\n")] = 0;
            printf("Quantity: ");
            scanf("%d", &inventory[count++].quantity);
            getchar();
        } 
        else if (choice == 2) {
            char name[MAX_NAME_LEN];
            printf("Product name to update: ");
            fgets(name, MAX_NAME_LEN, stdin);
            name[strcspn(name, "\n")] = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(inventory[i].name, name) == 0) {
                    printf("New quantity: ");
                    scanf("%d", &inventory[i].quantity);
                    getchar();
                    break;
                }
            }
        } 
        else if (choice == 3) {
            for (int i = 0; i < count; i++)
                printf("%s: %d\n", inventory[i].name, inventory[i].quantity);
        } 
        else if (choice == 4) break;
        else printf("Invalid choice or inventory full!\n");
    }
    return 0;
}
