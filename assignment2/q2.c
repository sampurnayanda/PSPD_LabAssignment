#include <stdio.h>
#include <string.h>

// Function to display a step and its time
void display_step(const char *step, int time) {
    printf("%s: %d minutes\n", step, time);
}

// Function to compute baking time based on loaf size
int compute_baking_time(int base_time, int is_double) {
    if (is_double) {
        return (int)(base_time * 1.5);
    }
    return base_time;
}

// Main bread machine function
void bread_machine() {
    char bread_type;
    char is_double_input, is_manual_input;
    int is_double, is_manual;

    // Ask user for input
    printf("Enter the type of bread (W for White, S for Sweet): ");
    scanf(" %c", &bread_type);
    printf("Is the loaf size double? (Y/N): ");
    scanf(" %c", &is_double_input);
    printf("Is the baking manual? (Y/N): ");
    scanf(" %c", &is_manual_input);

    // Convert input to boolean values
    is_double = (is_double_input == 'Y' || is_double_input == 'y');
    is_manual = (is_manual_input == 'Y' || is_manual_input == 'y');

    // Define time chart for each bread type
    int primary_kneading, primary_rising, secondary_kneading, secondary_rising, loaf_shaping, final_rising, baking, cooling;

    if (bread_type == 'W' || bread_type == 'w') {
        primary_kneading = 15;
        primary_rising = 60;
        secondary_kneading = 18;
        secondary_rising = 20;
        loaf_shaping = 2;
        final_rising = 75;
        baking = 45;
        cooling = 30;
    } else if (bread_type == 'S' || bread_type == 's') {
        primary_kneading = 20;
        primary_rising = 60;
        secondary_kneading = 33;
        secondary_rising = 30;
        loaf_shaping = 2;
        final_rising = 75;
        baking = 35;
        cooling = 30;
    } else {
        printf("Invalid bread type. Please enter W or S.\n");
        return;
    }

    // Adjust baking time if loaf size is double
    baking = compute_baking_time(baking, is_double);

    // Display steps
    display_step("Primary kneading", primary_kneading);
    display_step("Primary rising", primary_rising);
    display_step("Secondary kneading", secondary_kneading);
    display_step("Secondary rising", secondary_rising);
    display_step("Loaf shaping", loaf_shaping);

    if (is_manual) {
        printf("Manual baking selected. Remove the dough for manual baking.\n");
        return;
    }

    display_step("Final rising", final_rising);
    display_step("Baking", baking);
    display_step("Cooling", cooling);
}

// Main function
int main() {
    bread_machine();
    return 0;
}