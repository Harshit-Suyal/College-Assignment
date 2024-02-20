#include <stdio.h>
int main(){
    int arr[100], n, c = 0;  
    int i, j, k;  
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input elements in the array :\n");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);  
    }
    printf("The unique elements found in the array are: \n");
    for (i = 0; i < n; i++){
        c = 0;  
        for (j = 0, k = n; j < k + 1; j++){
            if (i != j){
                if (arr[i] == arr[j]){
                    c++;
                }
            }
        }
        if (c == 0){
            printf("%d ", arr[i]);  
        }
    }
    return 0; 
}
