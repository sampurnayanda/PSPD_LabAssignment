#include <stdio.h>
#include <math.h>

int main() {
    // Variables to store user inputs
    double takeoff_speed_kmh, distance_meters;

    // Prompt the user for inputs
    printf("Enter the takeoff speed of the jet (in km/hr): ");
    scanf("%lf", &takeoff_speed_kmh);

    printf("Enter the distance over which the catapult accelerates the jet (in meters): ");
    scanf("%lf", &distance_meters);

    // Convert takeoff speed from km/hr to m/s
    double takeoff_speed_ms = takeoff_speed_kmh * (1000.0 / 3600.0);

    // Calculate acceleration using the formula: v^2 = 2 * a * s
    double acceleration = (takeoff_speed_ms * takeoff_speed_ms) / (2 * distance_meters);

    // Calculate time using the formula: v = a * t
    double time = takeoff_speed_ms / acceleration;

    // Output the results
    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to reach takeoff speed: %.2f seconds\n", time);

    return 0;
}