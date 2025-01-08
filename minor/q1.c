#include <stdio.h>

int main() {
    double x1, y1, x2, y2;

    // Prompt the user to input the coordinates of the two points
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Compute the slope of the line between the two points
    double slope = (y2 - y1) / (x2 - x1);
    printf("Slope of the line: %.2f\n", slope);

    // Compute the midpoint of the line segment
    double x_mid = (x1 + x2) / 2;
    double y_mid = (y1 + y2) / 2;
    printf("Midpoint: (%.2f, %.2f)\n", x_mid, y_mid);

    // Compute the slope of the perpendicular bisector
    double slope_perp = -1 / slope;
    printf("Slope of the perpendicular bisector: %.2f\n", slope_perp);

    // Compute the y-intercept of the perpendicular bisector
    double y_intercept = y_mid - slope_perp * x_mid;
    printf("Y-intercept of the perpendicular bisector: %.2f\n", y_intercept);

    // Output the original points and the equation of the perpendicular bisector
    printf("\nOriginal Points:\n");
    printf("Point 1: (%.2f, %.2f)\n", x1, y1);
    printf("Point 2: (%.2f, %.2f)\n", x2, y2);

    printf("\nEquation of the Perpendicular Bisector:\n");
    printf("y = %.2fx + %.2f\n", slope_perp, y_intercept);

    return 0;
}