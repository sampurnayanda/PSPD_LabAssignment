#include <stdio.h>

// Define the number of brands
#define NUM_BRANDS 4

// Function to display the inventory
void displayInventory(int inventory[]) {
    const char *brandNames[] = {"Piels", "Coors", "Bud", "Iron City"};
    printf("\nFinal Inventory:\n");
    for (int i = 0; i < NUM_BRANDS; i++) {
        printf("%s: %d cases\n", brandNames[i], inventory[i]);
    }
}

int main() {
    int inventory[NUM_BRANDS]; // Array to hold the inventory for each brand
    int brandID, transaction;

    // Input the initial inventory for each brand
    printf("Enter initial inventory for Piels, Coors, Bud, and Iron City:\n");
    for (int i = 0; i < NUM_BRANDS; i++) {
        scanf("%d", &inventory[i]);
    }

    // Process transactions
    printf("\nEnter transactions (Brand ID and amount, 0 to stop):\n");
    while (1) {
        // Input brand ID and transaction amount
        scanf("%d", &brandID);

        // Stop if brand ID is 0
        if (brandID == 0) {
            break;
        }

        scanf("%d", &transaction);

        // Validate brand ID and update inventory
        if (brandID >= 1 && brandID <= NUM_BRANDS) {
            inventory[brandID - 1] += transaction;
        } else {
            printf("Invalid Brand ID! Please enter a number between 1 and 4.\n");
        }
    }

    // Display the final inventory
    displayInventory(inventory);
    return 0;
}
