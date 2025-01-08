 /*Write a program to take a depth (in kilometers) inside the earth as input data; compute and
 display the temperature at this depth in degrees Celsius and degrees Fahrenheit. The relevant
 formulas are
 Celsius = 10 (depth) + 20 (Celsius temperature at depth in km)
 Fahrenheit = 1.8 (Celsius) + 32
 Include two functions in your program. Function celsius at depth should compute and return
 the Celsius temperature at a depth measured in kilometers. Function fahrenheit should
 convert a Celsius temperature to Fahrenheit.*/
 #include <stdio.H>
 int celsius(int depth) {
    int celsius_temperature = 10 * depth + 20;
    printf("The temperature at depth %d km is %d degrees Celsius.\n", depth,celsius_temperature);
    return celsius_temperature;
    }
void fahrenheit(int celsius_temperature) {
        int fahrenheit_temperature = 1.8 * celsius_temperature + 32;
        printf("The temperature in Fahrenheit is %d degrees.\n", fahrenheit_temperature);
    }
    int main()
    {
        int depth;
        printf("Enter the depth in kilometers: ");
        scanf("%d", &depth);
        int t=celsius(depth);
        fahrenheit(t);
        return 0;
    }