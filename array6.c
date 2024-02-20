#include <stdio.h>
int main() {
    int arr[100], n, i, j = 0, lrg=0, sec=0;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements in the array : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (lrg < arr[i]) {
            lrg = arr[i];
            j = i;
        }
    }
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;
            i--;
        } 
        else {
            if (sec < arr[i]) {
                sec = arr[i];
            }
        }
    }
    printf("The Second largest element in the array is: %d", sec);
    return 0;
}
