#include<stdio.h>
#include<conio.h>
#include<math.h>

#define g(x,y) 2*(x)*(x)*(y)*(y)

int main() {
    int n, i, j, k;
    float sum, error, E[10], a[10][10], b[10], new_x[10], old_x[10], tl, tr, tu, tb, h;
    
    printf("Enter Dimension of plate: \n");
    scanf("%d", &n);
    printf("Enter Dimension of grid: \n");
    scanf("%f", &h);
    printf("Enter temperatures at left, right, bottom & upper part of plate: \n");
    scanf("%f%f%f%f", &tl, &tr, &tb, &tu);
    
    // Constructing Coefficient matrix
    for(i = 0; i <= n; i++)
        a[i][i] = -4;
    for(i = 0; i <= n; i++)
        a[i][n - i] = 0;
    for(i = 0; i <= n; i++)
        for(j = 0; j <= n; j++)
            if(i != j && j != (n - i))
                a[i][j] = 1;
    
    // Constructing RHS vector
    k = 0;
    for(i = 1; i < n; i++)
        for(j = 1; j < n; j++)
            b[k++] = h * h * g(i, j);
    
    k = 0;
    for(i = 1; i < n; i++) {
        for(j = 1; j < n; j++) {
            if((i - 1) == 0)
                b[k] -= tl;
            if((i + 1) == n)
                b[k] -= tr;
            if((j - 1) == 0)
                b[k] -= tb;
            if((j + 1) == n)
                b[k] -= tu;
            k++;
        }
    }
    
    printf("Enter Accuracy Limit: \n");
    scanf("%f", &error);
    
    // Solving System of linear equations by using Gauss-Seidal Method
    for(i = 0; i <= n; i++) {
        new_x[i] = 0;
        while(1) {
            sum = b[i];
            for(j = 0; j <= n; j++) {
                if(i != j)
                    sum -= a[i][j] * new_x[j];
            }
            old_x[i] = new_x[i];
            new_x[i] = sum / a[i][i];
            E[i] = fabs(new_x[i] - old_x[i]) / fabs(new_x[i]);
            
            // Check if desired accuracy is achieved
            if(E[i] <= error)
                break;
        }
    }
    
    printf("Solution: \n");
    for(i = 0; i <= n; i++)
        printf("x%d-%6.2f\n", i + 1, new_x[i]);
    
    getch();
    return 0;
}
