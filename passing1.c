#include<stdio.h>
void goa();
int main(){
    int i, n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    goa(n,arr);
    return 0;
}
void goa(int n, int arr[]){
    int i,largest;
    largest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }    
    printf("The largest element of the array is: %d",largest);
}