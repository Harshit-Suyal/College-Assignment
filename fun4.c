#include<stdio.h>
void so2();
int main(){
    int n, arr[100], i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    so2(n,arr);
    return 0;
}
void so2(int n, int arr[]){
    int a,b,sum=0; 
    printf("Enter the 2 positions: ");
    scanf("%d%d",&a,&b);
    sum+= arr[a-1]+arr[b-1];
    printf("The sum of the elements at position %d and %d is: %d.",a,b,sum);
}