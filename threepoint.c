#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) (2*(x)*(x)+1)

int main() {
    float h, x, d;
    
    printf("Enter the value at which derivative is required\n");
    scanf("%f", &x);
    
    printf("Enter increment h\n");
    scanf("%f", &h);
    
    d = (f(x+h) - f(x-h)) / (2*h); // Using central difference method for derivative
    
    printf("Value of Derivative = %f\n", d);
    
    getch(); // Note: getch() might not work on all compilers
    
    return 0;
}
