#include <stdio.h>

int main() {
    // Constants
    const double FLAT_RATE = 39.99;
    const double ADDITIONAL_RATE = 0.40;
    const double TAX_RATE = 0.0525;

    // Variables for input
    int weekday_minutes, night_minutes, weekend_minutes;

    // Prompt the user for input
    printf("Enter the number of weekday minutes used: ");
    scanf("%d", &weekday_minutes);

    printf("Enter the number of night minutes used: ");
    scanf("%d", &night_minutes);

    printf("Enter the number of weekend minutes used: ");
    scanf("%d", &weekend_minutes);

    // Calculate the pretax bill
    double pretax_bill = FLAT_RATE;
    if (weekday_minutes > 600) {
        pretax_bill += (weekday_minutes - 600) * ADDITIONAL_RATE;
    }

    // Calculate taxes
    double taxes = pretax_bill * TAX_RATE;

    // Calculate total bill
    double total_bill = pretax_bill + taxes;

    // Calculate total minutes used
    int total_minutes = weekday_minutes + night_minutes + weekend_minutes;

    // Calculate average cost per minute before taxes
    double average_cost_per_minute = pretax_bill / total_minutes;

    // Display the results
    printf("\nInput Data:\n");
    printf("Weekday Minutes: %d\n", weekday_minutes);
    printf("Night Minutes: %d\n", night_minutes);
    printf("Weekend Minutes: %d\n", weekend_minutes);

    printf("\nPretax Bill: $%.2f\n", pretax_bill);
    printf("Average Cost per Minute (before taxes): $%.4f\n", average_cost_per_minute);
    printf("Taxes: $%.2f\n", taxes);
    printf("Total Bill: $%.2f\n", total_bill);

    return 0;
}