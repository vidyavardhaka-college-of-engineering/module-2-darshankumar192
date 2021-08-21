//INPUT - 4 30 20 10 60
//OUTPUT: The largest and smallest elements are 60 and 10
#include <stdio.h>
#include<stdlib.h>
int main()
{
 int arr[100], n, i, small, large;
 printf("Enter how many values you want to read and values\n");
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
 //printf("Enter the value of a[%d] : ",i);
 scanf("%d", &arr[i]);
 }
 small = arr[0];
 large = arr[0];
 for (i = 1; i < n; i++)
 {
 if (arr[i] < small)
 {
 small = arr[i];
 }
 
 if (arr[i] >large)
 {
 large= arr[i];
 }
 }
 printf("The largest and smallest elements are %d and %d", large,small);
 
 return 0;
}



