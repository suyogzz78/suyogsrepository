#include <stdio.h>

int main() {
    int n, i, j;
    float v = 0, p, xv, x[10], fx[10], a[10];

    // Input the number of points
    printf("Enter the number of points: ");
    scanf("%d", &n);

    // Input the value of x for interpolation
    printf("Enter the value of x: ");
    scanf("%f", &xv);

    // Input the x and f(x) values for each data point
    printf("Enter the value of x and f(x) at i=%d:\n", 0);
    scanf("%f%f", &x[0], &fx[0]);

    // Calculate divided differences
    for (i = 1; i < n; i++) {
        printf("Enter the value of x and f(x) at i=%d:\n", i);
        scanf("%f%f", &x[i], &fx[i]);

        for (j = n - 1; j > i; j--) {
            fx[j] = (fx[j] - fx[j - 1]) / (x[j] - x[j - 1]);
        }
    }

    // Copy divided differences to coefficients array
    for (i = 0; i < n; i++) {
        a[i] = fx[i];
    }

    // Interpolation using Newton's divided difference method
    v = a[0];
    for (i = 1; i < n; i++) {
        p = 1;
        for (j = 0; j < i; j++) {
            p = p * (xv - x[j]);
        }
        v = v + a[i] * p;
    }

    // Print the interpolated value
    printf("Interpolation value = %.2f\n", v);

    return 0;
}

