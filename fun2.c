#include<stdio.h>
#include<math.h>
int GCD();
int main(){
   int a,b;
   printf("Enter the two integers: ");
   scanf("%d%d",&a,&b);
   printf("GCD is: %d",GCD(a,b));
   return 0;
}
int GCD(int i, int j){
   if(j>i)
      return GCD(j,i);
   else if(j==0)
      return i;
   else
      return GCD(j,i%j);
}