#include <stdio.h>
#include <math.h>

// Function to calculate the square root using iterative approximation
double calculateSquareRoot(double N) {
    double LG = 1.0; // Initial guess
    double NG = 0.0; // Next guess

    do {
        NG = 0.5 * (LG + N / LG); // Calculate next guess
        if (fabs(NG - LG) < 0.005) { // Check if the difference is less than 0.005
            break;
        }
        LG = NG; // Update last guess for the next iteration
    } while (1);

    return NG;
}

int main() {
    double N;

    // Input the number for which the square root needs to be calculated
    printf("Enter the number to calculate the square root: ");
    scanf("%lf", &N);

    // Ensure the input is positive
    if (N < 0) {
        printf("Square root of a negative number is undefined in real numbers.\n");
        return 1;
    }

    // Call the function and display the result
    double result = calculateSquareRoot(N);
    printf("The approximated square root of %.2f is %.4f\n", N, result);

    return 0;
