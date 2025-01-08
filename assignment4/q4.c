#include <stdio.h>
double calculateDragForce(double CD, double A, double rho, double V) {
    return 0.5 * CD * A * rho * V * V;
}

int main() {
    double CD, A;
    const double rho = 1.23; 
    printf("Enter the drag coefficient (CD): ");
    scanf("%lf", &CD);
    printf("Enter the projected area (A) in square meters: ");
    scanf("%lf", &A);
    printf("\nVelocity (m/s)\tDrag Force (N)\n");
    printf("-------------------------------\n");
    for (int V = 0; V <= 40; V += 5) {
        double dragForce = calculateDragForce(CD, A, rho, V);
        printf("%d\t\t%.2f\n", V, dragForce);
    }

    return 0;
}
