#include <stdio.h>

// Function to calculate fast food charges
double fast_food_billions(int year) {
    int t = year - 2005; // Calculate years since 2005
    return 33.2 + 16.8 * t; // Return the prediction
}

int main() {
    int year;

    while (1) {
        // Prompt the user to enter a year
        printf("Enter a year after 2005 (or a year before 2005 to stop): ");
        scanf("%d", &year);

        // Check if the year is before 2005
        if (year < 2005) {
            printf("Program stopped. You entered a year before 2005.\n");
            break;
        }

        // Calculate and display the prediction
        double prediction = fast_food_billions(year);
        printf("Predicted fast food charges in %d: $%.1f billion\n\n", year, prediction);
    }

    return 0;
}