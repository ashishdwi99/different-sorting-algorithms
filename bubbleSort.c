#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
     if (swapped == false) 
        break; 
   } 
} 

int main() 
{ 
    int a[] = {5, 6, 3, 1, 10, 3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    bubbleSort(arr, n); 
    return 0; 
} 
