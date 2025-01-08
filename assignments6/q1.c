#include <stdio.h>

// Define the date structure
typedef struct {
    int day;
    int month;
    int year;
} date_t;

// Define the gas tank structure
typedef struct {
    double capacity;    // in gallons
    double current_level; // in gallons
} tank_t;

// Define the automobile structure
typedef struct {
    char make[50];
    char model[50];
    int odometer;
    date_t manufacture_date;
    date_t purchase_date;
    tank_t gas_tank;
} auto_t;

// Function to scan a date
void scan_date(date_t *date) {
    scanf("%d %d %d", &date->day, &date->month, &date->year);
}

// Function to scan a gas tank
void scan_tank(tank_t *tank) {
    scanf("%lf %lf", &tank->capacity, &tank->current_level);
}

// Function to scan an automobile
void scan_auto(auto_t *car) {
    scanf("%s %s %d", car->make, car->model, &car->odometer);
    scan_date(&car->manufacture_date);
    scan_date(&car->purchase_date);
    scan_tank(&car->gas_tank);
}

// Function to print a date
void print_date(date_t date) {
    printf("%02d/%02d/%04d", date.day, date.month, date.year);
}

// Function to print a gas tank
void print_tank(tank_t tank) {
    printf("Capacity: %.1f gallons, Current Level: %.1f gallons", tank.capacity, tank.current_level);
}

// Function to print an automobile
void print_auto(auto_t car) {
    printf("Make: %s\n", car.make);
    printf("Model: %s\n", car.model);
    printf("Odometer: %d miles\n", car.odometer);
    printf("Manufacture Date: ");
    print_date(car.manufacture_date);
    printf("\n");
    printf("Purchase Date: ");
    print_date(car.purchase_date);
    printf("\n");
    printf("Gas Tank: ");
    print_tank(car.gas_tank);
    printf("\n");
}

int main() {
    auto_t car1, car2;

    // Test the functions with the provided data set
    printf("Enter details for the first car (Mercury Sable):\n");
    scan_auto(&car1);
    printf("\nEnter details for the second car (Mazda Navajo):\n");
    scan_auto(&car2);

    printf("\nDetails of the first car:\n");
    print_auto(car1);

    printf("\nDetails of the second car:\n");
    print_auto(car2);

    return 0;
}