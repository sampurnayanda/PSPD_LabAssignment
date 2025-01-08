#include <stdio.h>
#include <math.h> 
double calculate_payment(double principal, double monthly_interest_rate, int total_payments) {
    return (monthly_interest_rate * principal) / (1 - pow(1 + monthly_interest_rate, -total_payments));
}

int main() {
    double purchase_price, down_payment, annual_interest_rate, principal, monthly_interest_rate;
    int total_payments;
    double monthly_payment;
    printf("Enter the car's purchase price: $");
    scanf("%lf", &purchase_price);

    printf("Enter the down payment: $");
    scanf("%lf", &down_payment);
    
    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%lf", &annual_interest_rate);
    
    printf("Enter the total number of payments (36, 48, 60, etc.): ");
    scanf("%d", &total_payments);
    principal = purchase_price - down_payment;
    monthly_interest_rate = (annual_interest_rate / 100) / 12;
    monthly_payment = calculate_payment(principal, monthly_interest_rate, total_payments);
    printf("Amount borrowed: $%.2f\n", principal);
    printf("Monthly payment: $%.2f\n", monthly_payment);

    return 0;
}
