//binary to decimal in c
#include<stdio.h>
#include<math.h>
int binarytodecimal(int binarynumber)
{
   int decimalnum=0,temp=0,remainder;
   while(binarynumber!=0)
   {
    remainder=binarynumber % 10;
    binarynumber=binarynumber/10;
    decimalnum=decimalnum+remainder*pow(2,temp);
    temp++;
   }
   return decimalnum;
}
int main()
{
    int binarynum;
    printf("enter a binary number");
    scanf("%d",&binarynum);
    printf("equivalent decimal number is %d",binarytodecimal(binarynum));
    return 0;

}