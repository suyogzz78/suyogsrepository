#include<stdio.h>
int mod(int a,int b){
    int c;
    c=a%b;
    printf("the modulo is %d",c);
    return 0;

}
void main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    mod(a,b);

}
