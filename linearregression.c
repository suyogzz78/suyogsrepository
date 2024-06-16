#include <stdio.h>

int main() {
    int n, i;
    float a = 0, b = 0, x[10], y[10], sx = 0, sy = 0, sxy = 0, sx2 = 0;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    printf("Enter the value of x and y:\n");
    for (i = 0; i < n; i++) {
        scanf("%f%f", &x[i], &y[i]);
    }

    for (i = 0; i < n; i++) {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sx2 += x[i] * x[i];
    }

    b = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
    a = (sy / n) - (b * sx / n);

    printf("Fitted line is: y = %.2f + %.2f * x\n", a, b);

    return 0;
}
