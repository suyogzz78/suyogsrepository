#include<stdio.h>
#define size 8
int main(){
char binary[size+1],onescomplement[size+1];
int i,error=0;
printf("Enter the %d binary value:",size);
gets(binary);
for(i=0;i<size;i++)
{

    if(binary[i]=='1')
    {
        onescomplement[i]='0';
    }
    else if(binary[i]=='0')
    {
        onescomplement[i]='1';
    }
    else
    {
        printf("invalid");
        error=1;
        break;
    }
}
    onescomplement[size]='\0';
    if (error==0)
    {
        printf("original binary number=%s",binary);
        printf("Ones complement=%s",onescomplement);
    
    
    }
    return 0;

}
