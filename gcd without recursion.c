#include<stdio.h>
int gcd(int a,int b)
{
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
}
    int main()
    {
        int n1,n2;
        printf("enter any two positive numbers\n ");
        scanf("%d%d",&n1,&n2);
        int x=gcd(n1,n2);
        printf("the gcd of two numbers is %d",x);
        return 0;
    }
