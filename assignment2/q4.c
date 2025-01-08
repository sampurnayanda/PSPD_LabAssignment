#include <stdio.h>

// Function to check if a year is a leap year
int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    }
    return 0; // Not a leap year
}

// Function to calculate the day number in the year
int day_number(int month, int day, int year) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_num = 0;

    // Adjust February days if it's a leap year
    if (leap(year)) {
        days_in_month[1] = 29;
    }

    // Add days from previous months
    for (int i = 0; i < month - 1; i++) {
        day_num += days_in_month[i];
    }

    // Add the current day
    day_num += day;

    return day_num;
}

int main() {
    int month, day, year;

    // Input date from the user
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter year: ");
    scanf("%d", &year);

    // Validate the input
    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 0) {
        printf("Invalid date entered.\n");
        return 1;
    }

    // Calculate and display the day number
    int result = day_number(month, day, year);
    printf("The day number is: %d\n", result);

    return 0;
}