#include<stdio.h>
#include<math.h>
void arm();
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    arm(n);
    return 0;
}
void arm(int n){
    int c=0,temp=n,sum=0;
    while(n!=0){
        c++;
        n=n/10;
    }
    n=temp;
    while(n!=0){
        sum+= pow(n%10,c);
        n/=10;
    }
    if(sum==temp){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}