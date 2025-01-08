#include <stdio.h>
#include<string.h>

// Function to convert compass heading to compass bearing
void convert_to_bearing(double heading) {
    // Check for invalid input
    if (heading < 0 || heading > 360) {
        printf("Invalid compass heading. Heading must be between 0 and 360 degrees.\n");
        return;
    }

    // Determine the bearing
    char primary_direction[10]; // North or South
    char secondary_direction[10]; // East or West
    double angle;

    if (heading >= 0 && heading <= 90) {
        strcpy(primary_direction, "North");
        strcpy(secondary_direction, "East");
        angle = heading;
    } else if (heading > 90 && heading <= 180) {
        strcpy(primary_direction, "South");
        strcpy(secondary_direction, "East");
        angle = 180 - heading;
    } else if (heading > 180 && heading <= 270) {
        strcpy(primary_direction, "South");
        strcpy(secondary_direction, "West");
        angle = heading - 180;
    } else if (heading > 270 && heading <= 360) {
        strcpy(primary_direction, "North");
        strcpy(secondary_direction, "West");
        angle = 360 - heading;
    }

    // Print the compass bearing
    printf("Compass Bearing: %s %.1f degrees %s\n", primary_direction, angle, secondary_direction);
}

int main() {
    double heading;

    // Prompt the user for a compass heading
    printf("Enter a compass heading (0 to 360 degrees): ");
    scanf("%lf", &heading);

    // Convert the heading to a compass bearing
    convert_to_bearing(heading);

    return 0;
}