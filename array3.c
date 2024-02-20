#include <stdio.h>
// Main function
int main(){
    int arr[100], n, c=0, i ,j;  
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    printf("Input elements in the array :\n");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);  
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                c++;  
                break;  
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", c);
    return 0;
}