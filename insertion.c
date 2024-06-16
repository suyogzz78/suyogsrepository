#include <stdio.h>
void insertionSort(int[], int);
int n, a[100], i;
void main()
{
printf("Enter no. of items:\t");
scanf("%d", &n);
printf("Enter %d data items into array\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("The data before sorting are:\n");
for (i = 0; i < n; i++)
{
printf("%d \t", a[i]);
}
printf("\n");
insertionSort(a, n);
printf("The data after sorting are:\n");
for (i = 0; i < n; i++)
{
printf("%d \t", a[i]);
}
}
void insertionSort(int a[], int n)
{
int i, j, temp;
for (i = 0; i < n; i++)
{
temp = a[i];
j = i - 1;
while (temp < a[j] && j >= 0)
{
a[j + 1] = a[j];
j--;
}
a[j + 1] = temp;
}
}