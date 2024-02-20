#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; 
    int i = 0; 
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    printf("The characters of the string are : \n");
    while (str[i] != '\0') {
        printf("%c  ", str[i]); 
        i++;
    }
    return 0; 
}
