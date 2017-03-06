#include <stdio.h>
 
// A iterative binary search function. It returns location of x in
// given array arr[l..r] if present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
 
    // Check if x is present at mid
    if (arr[m] == x) 
        return m;  
 
    // If x greater, ignore left half  
    if (arr[m] < x) 
        l = m + 1; 
 
    // If x is smaller, ignore right half 
    else
         r = m - 1; 
  }
 
  // if we reach here, then element was not present
  return -1; 
}
 
int main(void)
{
   int arr[100], N, x;
   printf("Enter the size of the array.\n");
   scanf("%d" ,&N);
   printf("Enter the elements.\n");

   for (int i =0; i < N; i++) 
   {
       scanf("%d", &arr[i]);
   }

   //int n = sizeof(arr)/ sizeof(arr[0]);
   printf("Enter the element to be searched.\n");
   scanf("%d", &x);
   int result = binarySearch(arr, 0, N-1, x);
   (result == -1)? printf("Element is not present in array\n")
                 : printf("Element is present at index %d\n", result);
   return 0;
}