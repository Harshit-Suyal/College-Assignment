#include <stdio.h>
 /* Function declarations */
int checkPerfect();
void perfectNumbers();
int main(){
    int st, en;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &st);
    printf("Input highest search limit of  perfect numbers : ");
    scanf("%d", &en);
    printf("The perfect numbers between %d to %d are : \n", st, en);
    perfectNumbers(st, en);
    return 0;
}
int checkPerfect(int n1){
    int i, sum=0;
    for(i=1; i<n1; i++){
        if(n1 % i == 0){
            sum += i;
        }
    }
    if(sum == n1)
        return 1;
    else
        return 0;
}
void perfectNumbers(int st, int en){
    while(st <= en){
        if(checkPerfect(st)){
            printf("%d ", st);
        }
        st++;
    }   
}
