#include <stdio.h>
void display_instructions() 
{
    printf("This program calculates the cyclist's constant rate of acceleration.\n");
    printf("It also determines how long it will take the cyclist to come to rest given an initial speed of 10 mi/hr.\n\n");
}
double compute_acceleration(double v_initial, double v_final, double time_interval) {
    return (v_final - v_initial) / time_interval;
}

int main() {
    display_instructions();
    double v_initial = 10.0;  
    double v_final = 2.5;     
    double time_interval = 1.0;  
    time_interval /= 60.0;
    double acceleration = compute_acceleration(v_initial, v_final, time_interval);
    double time_to_rest = -v_initial / acceleration;
    printf("The constant rate of acceleration is %.4f mi/hr^2.\n", acceleration);
    printf("The cyclist will take %.2f hours or %.2f minutes to come to rest.\n", time_to_rest, time_to_rest * 60);

    return 0;
}
