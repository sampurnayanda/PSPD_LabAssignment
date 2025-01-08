#include <stdio.h>

int main() {
    int pollutant_number;
    double grams_emitted, odometer_reading;
    double limit;

    // Display pollutant options
    printf("(1) Carbon monoxide\n");
    printf("(2) Hydrocarbons\n");
    printf("(3) Nitrogen oxides\n");
    printf("(4) Nonmethane hydrocarbons\n");
    printf("Enter pollutant number: ");
    scanf("%d", &pollutant_number);

    // Input validation
    if (pollutant_number < 1 || pollutant_number > 4) {
        printf("Invalid pollutant number. Please enter a number between 1 and 4.\n");
        return 1;
    }

    // Get grams emitted and odometer reading
    printf("Enter number of grams emitted per mile: ");
    scanf("%lf", &grams_emitted);
    printf("Enter odometer reading: ");
    scanf("%lf", &odometer_reading);

    // Determine the emissions limit based on odometer reading and pollutant
    if (odometer_reading <= 50000) {
        // First 50,000 miles
        switch (pollutant_number) {
            case 1:
                limit = 3.4; // Carbon monoxide
                break;
            case 2:
                limit = 0.31; // Hydrocarbons
                break;
            case 3:
                limit = 0.4; // Nitrogen oxides
                break;
            case 4:
                limit = 0.25; // Nonmethane hydrocarbons
                break;
        }
    } else {
        // Second 50,000 miles
        switch (pollutant_number) {
            case 1:
                limit = 4.2; // Carbon monoxide
                break;
            case 2:
                limit = 0.39; // Hydrocarbons
                break;
            case 3:
                limit = 0.5; // Nitrogen oxides
                break;
            case 4:
                limit = 0.31; // Nonmethane hydrocarbons
                break;
        }
    }

    // Compare emissions with the limit
    if (grams_emitted > limit) {
        printf("Emissions exceed permitted level of %.2f grams/mile.\n", limit);
    } else {
        printf("Emissions are within the permitted level of %.2f grams/mile.\n", limit);
    }

    return 0;
}