#include <stdio.h>
#include <math.h>  

double calculate_acceleration(double speed_m_s, double distance) {
    return pow(speed_m_s, 2) / (2 * distance);
}

double calculate_time(double speed_m_s, double acceleration) {
    return speed_m_s / acceleration;
}

int main() {
    double takeoff_speed_kmh, takeoff_speed_m_s, distance, acceleration, time;

    printf("Enter the jet's takeoff speed (in km/h): ");
    scanf("%lf", &takeoff_speed_kmh);
    
    printf("Enter the distance over which the jet is accelerated (in meters): ");
    scanf("%lf", &distance);

    takeoff_speed_m_s = takeoff_speed_kmh * 1000 / 3600;
    acceleration = calculate_acceleration(takeoff_speed_m_s, distance);

   
    time = calculate_time(takeoff_speed_m_s, acceleration);

 
    printf("The jet's acceleration is %.2f m/s^2.\n", acceleration);
    printf("The time required to reach takeoff speed is %.2f seconds.\n", time);

    return 0;
}
