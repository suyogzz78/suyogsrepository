#include <stdio.h>
void selectionSort(int[], int);
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
selectionSort(a, n);
printf("The data after sorting are:\n");
for (i = 0; i < n; i++) {
printf("%d \t", a[i]);
}
}
void selectionSort(int a[], int n){
int i, j, temp, index, least;
for (i = 0; i < n; i++)
{
least = a[i];
index = i;
for (j = i + 1; j < n; j++) {
if (a[j] < least)
{
least = a[j];
index = j;



}
}
if (i != index) {
temp = a[i];
a[i] = a[index];
a[index] = temp;
}
}
}