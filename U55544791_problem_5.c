#include <stdio.h>
#include <stdlib.h> 

void swap(unsigned int *xp, unsigned int *yp) 
{ 
  int temp = *xp;  
  *xp = *yp; 
  *yp = temp; 
} 

void bubbleSort(unsigned int arr[], unsigned int n) 
{ 
  int i, j; 
  for (i = 0; i != n-1; i++)        
    for (j = 0; j != n-i-1; j++)  
      if (arr[j] > arr[j+1]) 
        swap(&arr[j], &arr[j+1]); 
} 

void main(){
  unsigned int n, filter;
  
  int i;

  scanf("%u", &n);
  unsigned int  arr[n];

  for(i = 0; i < n; i++)
    scanf("%u", &arr[i]);
  
  scanf("%u", &filter);

  bubbleSort(arr, n);

  for(i = 0; i < n; i++){
    if (arr[i] > filter)
      break;
  }
  unsigned int filtarr[n-i];

  int j;
  for(j = 0; j+i<n; j++){
    filtarr[j] = arr[j+i];
  }
  for(j = 0; j < n-i; j++){
    printf("%u ", filtarr[j]);
  }
}