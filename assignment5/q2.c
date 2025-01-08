#include <stdio.h>

// Constants
#define LITERS_PER_FLUSH_EXISTING 15  // liters per flush for existing toilets
#define LITERS_PER_FLUSH_LOW_FLUSH 2  // liters per flush for low-flush toilets
#define FLUSHES_PER_DAY 14            // average number of flushes per toilet per day
#define TOILETS_PER_PERSON (1.0 / 3)  // 1 toilet for every 3 persons
#define COST_PER_TOILET 150           // cost to install each new toilet in dollars

int main() {
    // Variable to store the community's population
    int population;

    // Prompt the user for the community's population
    printf("Enter the community's population: ");
    scanf("%d", &population);

    // Calculate the number of toilets in the community
    double num_toilets = population * TOILETS_PER_PERSON;

    // Calculate the current water usage per day (liters/day)
    double current_water_usage = num_toilets * FLUSHES_PER_DAY * LITERS_PER_FLUSH_EXISTING;

    // Calculate the water usage per day with low-flush toilets (liters/day)
    double low_flush_water_usage = num_toilets * FLUSHES_PER_DAY * LITERS_PER_FLUSH_LOW_FLUSH;

    // Calculate the water saved per day (liters/day)
    double water_saved = current_water_usage - low_flush_water_usage;

    // Calculate the total cost to install new toilets
    double total_cost = num_toilets * COST_PER_TOILET;

    // Output the results
    printf("Water saved per day: %.2f liters/day\n", water_saved);
    printf("Total cost to install new toilets: $%.2f\n", total_cost);

    return 0;
}