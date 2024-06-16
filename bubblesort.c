#include<stdio.h>
void BubbleSort(int[], int);
int n, a[100], i;
void main(){
printf("Enter no. of items:\t");
scanf("%d", &n);
printf("Enter %d data items into array\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
printf("The data before sorting are:\n");
for (i = 0; i < n; i++) {
printf("%d \t", a[i]);
}
printf("\n");
BubbleSort(a, n);
printf("The data after sorting are:\n");
for (i = 0; i < n; i++) {
printf("%d \t", a[i]);
}
}
void BubbleSort(int a[], int n){
int i, j, temp;
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - i - 1; j++)
{
temp = a[j];
if (a[j] > a[j + 1])
{
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
}