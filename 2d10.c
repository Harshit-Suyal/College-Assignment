#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char str[100],ch;
    printf("Enter the string: ");
    fgets(str,100,stdin);
    printf("Enter the character to replace the spaces with: ");
    scanf("%c",&ch);
    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i]= ch;
        }
        i++;
    }
    puts(str);
    return 0;
}