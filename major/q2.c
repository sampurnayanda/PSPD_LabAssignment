#include <stdio.h>

// Function to check if data is within x% of ref
int within_x_percent(double ref, double data, double x) {
    double lower_bound = ref - (ref * x / 100);
    double upper_bound = ref + (ref * x / 100);
    return (data >= lower_bound && data <= upper_bound);
}

int main() {
    // Define normal boiling points of substances
    double water_bp = 100;
    double mercury_bp = 357;
    double copper_bp = 1187;
    double silver_bp = 2193;
    double gold_bp = 2660;

    double observed_bp;
    printf("Enter the observed boiling point in °C: ");
    scanf("%lf", &observed_bp);

    // Check if the observed boiling point matches any substance
    if (within_x_percent(water_bp, observed_bp, 5)) {
        printf("Substance: Water\n");
    } else if (within_x_percent(mercury_bp, observed_bp, 5)) {
        printf("Substance: Mercury\n");
    } else if (within_x_percent(copper_bp, observed_bp, 5)) {
        printf("Substance: Copper\n");
    } else if (within_x_percent(silver_bp, observed_bp, 5)) {
        printf("Substance: Silver\n");
    } else if (within_x_percent(gold_bp, observed_bp, 5)) {
        printf("Substance: Gold\n");
    } else {
        printf("Substance Unknown\n");
    }

    return 0;
}