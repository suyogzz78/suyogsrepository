#include <stdio.h>
void push();
void pop();
void display();
int stack[100], i,  choice = 0, n, top = -1;

void main()
{
printf("Enter the number of elements in the stack:\n");
scanf("%d", &n);
printf("-----**Stack Operations using array**-----\n");
while (choice != 4)
{
printf("Choose \n1. Push \n2. Pop \n3. Peek \n4.Exit \n");
scanf("%d", &choice);
switch (choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("Exiting..");
break;
default:
printf("Invalid choice: \nEnter Valid Choice:");
}
}
}
void push()
{
int val;
if (top == n-1)
{
printf("Stack Overflow \n");
}
else
{
printf("Enter the value:\n");
scanf("%d", &val);
top++;
stack[top] = val;
}
}
void pop()
{
int item;
if (top == -1)
{
printf("The stack is underflow or empty");
}
else
{
item = stack[top];
top --;
printf("The popped item is = %d \n", item);
}
}
void display()
{
printf("The elements in the stack are:\n");
for (i = top; i >= 0; i--)
{
printf("%d\n", stack[i]);
}
if (top == -1)
{
printf("Stack is underflow");
}
}