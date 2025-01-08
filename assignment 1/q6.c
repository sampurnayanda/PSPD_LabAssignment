#include <stdio.h>

double celsius_at_depth(double depth) 
{
    return 10 * depth + 20;
}

double fahrenheit(double celsius_temp) 
{
    return 1.8 * celsius_temp + 32;
}

int main() {
    double depth, temp_celsius, temp_fahrenheit;
    printf("Enter depth inside the Earth in kilometers: ");
    scanf("%lf", &depth);
    temp_celsius = celsius_at_depth(depth);
    temp_fahrenheit = fahrenheit(temp_celsius);
    printf("At a depth of %.2f km, the temperature is %.2f °C or %.2f °F.\n", depth, temp_celsius, temp_fahrenheit);
    return 0;
}
