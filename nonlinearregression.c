#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float a = 0, b = 0, r, x[10], y[10], sx = 0, slgy = 0, sxy = 0, sx2 = 0;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    printf("Enter the value of x and y:\n");
    for (i = 0; i < n; i++)
        scanf("%f%f", &x[i], &y[i]);

    for (i = 0; i < n; i++) {
        sx += x[i];
        slgy += log(y[i]);
        sxy += x[i] * log(y[i]);
        sx2 += x[i] * x[i];
    }

    b = (n * sxy - sx * slgy) / (n * sx2 - sx * sx);
    r = (slgy / n) - (b * sx / n);
    a = exp(r);

    printf("Fitted curve is: y = %fe^(%fx)\n", a, b);

    return 0;
}
