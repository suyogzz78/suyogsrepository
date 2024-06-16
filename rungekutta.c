#include<stdio.h>
#include<conio.h>

#define f(x,y) (2*(x) + (y))

int main() {
    float xp, x0, y0, y, h, m1, m2, m3, m4;

    printf("Enter initial values of x & y: \n");
    scanf("%f%f", &x0, &y0);

    printf("Enter x at which function to be evaluated: \n");
    scanf("%f", &xp);

    printf("Enter the step size: \n");
    scanf("%f", &h);

    y = y0;
    for (float x = x0; x < xp; x += h) {
        m1 = f(x, y);
        m2 = f(x + h / 2.0, y + h / 2.0 * m1);
        m3 = f(x + h / 2.0, y + h / 2.0 * m2);
        m4 = f(x + h, y + h * m3);
        y = y + h / 6.0 * (m1 + 2 * m2 + 2 * m3 + m4);
    }

    printf("Function value at x = %f is %f\n", xp, y);

    getch();
    return 0;
}
