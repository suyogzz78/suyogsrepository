#include<stdio.h>
int facto(int a)
{
    if(a==1 || a==0)
    return 1;
    else
    return a*facto(a-1);
}
int main()
{
    int num;
    printf("enter a positive number :");
    scanf("%d",&num);
    int result=facto(num);
    printf("the factorial is %d",result);
    return 0;
}