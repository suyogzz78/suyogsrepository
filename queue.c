#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX], ch, front = 0, rear = 0, i, j = 1,x;
void enqueue();
void dequeue();
void display();

void main(){
printf("\n enter your choice\n1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY \n4.EXIT");
while (ch!=4) {
printf("\nEnter the Choice:");
scanf("%d", &ch);
switch (ch) {
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("Wrong Choice: please see the options above.");

}
}
}

void enqueue()
{
	if (rear == MAX-1) // x is MAX
printf("\n Queue is Full(Overflow)");
else {
printf("\n Enter no %d:", j++); // Enter no 1
scanf("%d",&x); // initially rear=0 then increment
queue[rear]=x;
rear++;
}
}
void dequeue()
{
if (front == rear) {
printf("\n Queue is empty");
}
else {
printf("\n Deleted Element is %d", queue[front++]);
}	
}
void display()
{
	printf("\nQueue Elements are:\n ");
if (front == rear)
printf("\n Queue is Empty");
else {
for (i = front; i < rear; i++) {
printf("%d", queue[i]);
printf("\n");
}
}
}