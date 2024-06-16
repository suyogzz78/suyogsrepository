#include <stdio.h>
// A recursive binary search function. It returns location of x in given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x){
if (r >= l) {
int mid = (l + r)/ 2;
// If the element is present at the middle itself
if (arr[mid] == x)
return mid;
// If element is smaller than mid, then
// it can only be present in left subarray
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);
// Else the element can only be present
// in right subarray
return binarySearch(arr, mid + 1, r, x);
}
// We reach here when element is not present in array
return -1;
}
void main(){
int n,i;
printf("Enter no. of elements\n");
scanf("%d",&n);
int arr[20];

 

printf("Enter %d elements in array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int key;
printf("Enter a key to search in an array\n");
scanf("%d",&key);
int result = binarySearch(arr, 0, n - 1, key);
(result == -1)
? printf("Element is not present in array")
: printf("Element is present at index %d", result);
}