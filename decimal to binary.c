
#include<stdio.h>
#include<math.h>
int dtob(int decimalno)
{
	int bn=0;
	int rem,temp=1;
	while (decimalno!=0)
	{
		rem=decimalno%2;
		decimalno=decimalno/2;
		bn=bn+rem*temp;
		temp=temp*10; 
	}
	return bn;
}
int main(){
	int decimalno;
	printf("enter a decimal no");
	scanf("%d",&decimalno);
	printf("equivalent bn is%d",dtob(decimalno));
	return 0;
}