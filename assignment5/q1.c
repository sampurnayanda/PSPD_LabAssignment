#include <stdio.h>

// Constants
#define GRAVITATIONAL_CONSTANT 9.80  // m/s^2
#define EFFICIENCY 0.90              // 90% efficiency
#define MASS_PER_CUBIC_METER 1000    // kg/m^3
#define MEGAWATT_CONVERSION 1e6      // 1 MW = 10^6 W

int main() {
    // Variables to store user inputs
    double height, flow_rate;

    // Prompt the user for inputs
    printf("Enter the height of the dam (in meters): ");
    scanf("%lf", &height);

    printf("Enter the flow rate of water (in cubic meters per second): ");
    scanf("%lf", &flow_rate);

    // Calculate the mass of water flowing per second
    double mass_per_second = flow_rate * MASS_PER_CUBIC_METER;

    // Calculate the work done by gravity per second (power in watts)
    double power_watts = mass_per_second * GRAVITATIONAL_CONSTANT * height;

    // Adjust for efficiency (90% of the work is converted to electrical energy)
    power_watts *= EFFICIENCY;

    // Convert power to megawatts
    double power_megawatts = power_watts / MEGAWATT_CONVERSION;

    // Output the result
    printf("The predicted power output is %.2f MW.\n", power_megawatts);

    return 0;
}