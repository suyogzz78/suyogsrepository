#include<stdio.h>
void fl(float a){
    int b;
     b = a;
     printf("the floor value is %d",b);
    // return 0;

}
void cl(float a){
    int b;
    b=a+1;

     printf("the ceil value is %d",b);
    // return 0;
}
int main(){
    int cases;
    printf("Enter 1 for floor function and 2 for ceiling function");
    scanf("%d",&cases);
    float num;
    printf("Enter a number:");
    scanf("%f",&num);
    switch (cases)
    {
    case 1:
    fl(num);
        break;
    case 2:
    cl(num);
    break;

    default:
    printf("Enter a valid number");
        break;
    }
return 0;
}