#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) (x+2)

int main() {
    float h, x0, x1, fx0, fx1, v;
    
    printf("Enter Lower & Upper Limit\n"); 
    scanf("%f%f", &x0, &x1);
    
    h = x1 - x0;
    fx0 = f(x0);
    fx1 = f(x1);
    v = h/2 * (fx0 + fx1);
    
    printf("Value of Integration: %f\n", v);
    
    getch();
    return 0;
}
