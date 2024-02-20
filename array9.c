#include <stdio.h>

int main() {
    char str[100], ch; 
    int i, c = 0;
    printf("Input the string : ");
    fgets(str, 100, stdin);
    printf("Input the character to find frequency: ");
    scanf("%c", &ch); 
    for (i = 0; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            c++; 
        }
    }
    printf("The frequency of '%c' is : %d.", ch, c);
	return 0;
}
