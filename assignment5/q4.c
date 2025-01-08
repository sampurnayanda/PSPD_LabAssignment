 /*You have saved $500 to use as a down payment on a car. Before beginning your car shopping,
 you decide to write a program to help you figure out what your monthly payment will be, given
 the car’s purchase price, the monthly interest rate, and the time period over which you will
 pay back the loan. The formula for calculating your payment is
 payment =
 iP
 1 −(1+i)−n
 where P = principal (the amount you borrow)
 i = monthly interest rate 1
 12 of the annual rate)
 n = total number of payments*/

 #include <stdio.h>
#include <math.h>

int main() {
    // Constants
    double down_payment = 500.0; // Down payment in dollars

    // Variables to store user inputs
    double purchase_price, annual_interest_rate, loan_term_years;

    // Prompt the user for inputs
    printf("Enter the purchase price of the car (in dollars): ");
    scanf("%lf", &purchase_price);

    printf("Enter the annual interest rate (as a percentage, e.g., 5.5 for 5.5%%): ");
    scanf("%lf", &annual_interest_rate);

    printf("Enter the loan term (in years): ");
    scanf("%lf", &loan_term_years);

    // Calculate the principal (amount borrowed)
    double principal = purchase_price - down_payment;

    // Calculate the monthly interest rate
    double monthly_interest_rate = (annual_interest_rate / 100.0) / 12.0;

    // Calculate the total number of payments
    int total_payments = (int)(loan_term_years * 12);

    // Calculate the monthly payment using the formula
    double monthly_payment = (principal * monthly_interest_rate) /
                             (1 - pow(1 + monthly_interest_rate, -total_payments));

    // Output the result
    printf("Your monthly payment will be: $%.2f\n", monthly_payment);

    return 0;
}