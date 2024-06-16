#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int i, j, n;
    float el, k;
    float E[10], a[10][10], nx[10], x[10], y[10];

    printf("Enter Dimension of System of equations\n");
    scanf("%d", &n);

    printf("Enter coefficients row-wise\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter guess vector\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter Accuracy Limit\n");
    scanf("%f", &el);

    while (1) {
        for (i = 0; i < n; i++) {
            y[i] = 0;
            for (j = 0; j < n; j++) {
                y[i] += a[i][j] * x[j];
            }
        }

        k = y[0];
        for (i = 1; i < n; i++) {
            if (k < y[i]) {
                k = y[i];
            }
        }

        for (i = 0; i < n; i++) {
            nx[i] = 1 / k * y[i];
        }

        for (i = 0; i < n; i++) {
            E[i] = fabs((nx[i] - x[i]) / nx[i]);
        }

        int flag = 1;
        for (i = 0; i < n; i++) {
            if (E[i] > el) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("Largest Eigenvalue is: %f\n", k);
            printf("Eigenvector is: \n");
            for (i = 0; i < n; i++) {
                printf("%f\t", nx[i]);
            }
            break;
        } else {
            for (i = 0; i < n; i++) {
                x[i] = nx[i];
            }
        }
    }

    getch();
    return 0;
}
