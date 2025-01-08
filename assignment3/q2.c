#include <stdio.h>

// Function to calculate net pay
double calculate_net_pay(double hourly_wage, double hours_worked) {
    double gross_pay, overtime_pay, tax, net_pay;

    // Calculate gross pay
    if (hours_worked <= 40) {
        gross_pay = hourly_wage * hours_worked;
    } else {
        overtime_pay = (hours_worked - 40) * (hourly_wage * 1.5);
        gross_pay = (40 * hourly_wage) + overtime_pay;
    }

    // Calculate tax (3.625% of gross pay)
    tax = gross_pay * 0.03625;

    // Calculate net pay
    net_pay = gross_pay - tax;

    return net_pay;
}

int main() {
    int num_employees;
    double total_payroll = 0.0;

    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Process each employee
    for (int i = 1; i <= num_employees; i++) {
        int id;
        double hourly_wage, hours_worked, net_pay;

        // Input employee details
        printf("\nEnter details for employee %d:\n", i);
        printf("Employee ID: ");
        scanf("%d", &id);
        printf("Hourly wage rate: ");
        scanf("%lf", &hourly_wage);
        printf("Hours worked: ");
        scanf("%lf", &hours_worked);

        // Calculate net pay
        net_pay = calculate_net_pay(hourly_wage, hours_worked);

        // Display employee's net pay
        printf("Employee %d's net pay: $%.2f\n", id, net_pay);

        // Add to total payroll
        total_payroll += net_pay;
    }

    // Display total payroll and average amount paid
    printf("\nTotal payroll: $%.2f\n", total_payroll);
    printf("Average amount paid per employee: $%.2f\n", total_payroll / num_employees);

    return 0;
}