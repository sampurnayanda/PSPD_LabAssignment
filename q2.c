#include <stdio.h>

int main() {
    int population;
    float toilets, old_toilet_flush = 15.0, new_toilet_flush = 2.0;
    int flushes_per_day = 14;
    float water_saved_per_flush, total_water_saved, total_installation_cost;
    int cost_per_toilet = 150;

    printf("Enter the population of the community: ");
    scanf("%d", &population);

    toilets = (float)population / 3;
    water_saved_per_flush = old_toilet_flush - new_toilet_flush;
    total_water_saved = toilets * flushes_per_day * water_saved_per_flush;
    total_installation_cost = toilets * cost_per_toilet;
    printf("Total water saved per day: %.2f liters\n", total_water_saved);
    printf("Total cost to install new toilets: $%.2f\n", total_installation_cost);
    return 0;
}