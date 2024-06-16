#include <stdio.h>
int add(int a, int b)
{
    int c = a + b;
    printf("%d", c);
    return 0;
}
int sub(int a, int b)
{
    int c = a - b;
    printf("%d", c);
    return 0;
}
int mul(int a, int b)
{
    int c = a * b;
    printf("%d", c);
    return 0;
}
int div(int a, int b)
{
    int c = a / b;
    printf("%d", c);
    return 0;
}
int main()
{
    int cases;
    printf("Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division\n");
    // printf("Input the operation that you want to perform\n");
    scanf("%d", &cases);
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    switch (cases)
    {
    case 1:
        add(a, b);
        break;
    case 2:
        sub(a, b);
        break;
    case 3:
        mul(a, b);
        break;
    case 4:
        div(a, b);
        break;
    
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}