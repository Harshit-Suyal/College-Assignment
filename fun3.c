#include <stdio.h>  
void bubblesort();
int main(){  
  int arr[100],n,i;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  bubblesort(n,arr);  
  return 0;  
}  
void bubblesort(int n, int arr[]){  
  int i, j, temp;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]){  
        temp = arr[j];  
        arr[j] = arr[j + 1];  
        arr[j + 1] = temp;  
      }  
    }  
  }
  printf("Sorted array: ");  
  for(i = 0; i < n; i++) {  
    printf("%d ", arr[i]);  
  }   
} 