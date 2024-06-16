#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int i, j, k, n;
    float pivot, term, a[10][10];

    printf("Enter Dimension of System of equations\n");
    scanf("%d", &n);

    printf("Enter coefficients Augmented Matrix\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n + 1; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // Elimination
    for(k = 0; k < n; k++) {
        pivot = a[k][k];
        for(j = 0; j < n + 1; j++) {
            a[k][j] = a[k][j] / pivot; // Normalization
        }
        for(i = 0; i < n; i++) {
            if(k != i) {
                term = a[i][k];
                for(j = 0; j < n + 1; j++) {
                    a[i][j] = a[i][j] - a[k][j] * term;
                }
            }
        }
    }

    // Display Solution Vector
    printf("Solution:\n");
    for(i = 0; i < n; i++) {
        printf("x%d = %f\t", i + 1, a[i][n]);
    }

    getch();
    return 0;
}
