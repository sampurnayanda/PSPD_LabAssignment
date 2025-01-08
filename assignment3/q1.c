#include <stdio.h>

// Function to calculate fast food charges
double fastFoodBillions(int year) {
    int t = year - 2005; // Calculate the years since 2005
    return 33.2 + 16.8 * t;
}

int main() {
    int year;
    double charges;

    printf("Enter a year after 2005 to predict fast food charges.\n");
    printf("Entering a year before 2005 will stop the program.\n");

    while (1) {
        // Prompt the user to enter a year
        printf("\nEnter year: ");
        scanf("%d", &year);

        // Check if the year is before 2005
        if (year < 2005) {
            printf("Year before 2005 entered. Program stopped.\n");
            break;
        }

        // Call the function and display the predicted charges
        charges = fastFoodBillions(year);
        printf("Predicted fast food charges in %d: $%.2f billion\n", year, charges);
    }

    return 0;
}
