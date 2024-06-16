#include <stdio.h>
#define size 20
int LinearSearch(int number[], int n, int key){
int i;
for (i = 0; i < n; i++) {
if (key == number[i]) {
return 1;
}
else {
return -1;
}
}
}



void main()
{
int number[size];
int i, n, key;
printf("Enter number of elements in an array:\t");
scanf("%d", &n);
printf("Enter %d numbers\n", n);
for (i = 0; i < n; i++)
{
printf("Enter %d. Number=\t", i);
scanf("%d", &number[i]);
}
printf("Enter a key to search\n");
scanf("%d", &key);
int val = LinearSearch(number, n, key);
if (val == 1)
{
printf("%d is found in current array\n", key);
}
else
{
printf("%d is not found in current array\n", key);
}
}