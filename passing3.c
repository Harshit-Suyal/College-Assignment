#include<stdio.h>
void soe();
int main(){
    int i, n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    soe(n,arr);
    return 0;
}
void soe(int n, int arr[]){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }    
    printf("The sum of all the elements of the array is: %d",sum);
}