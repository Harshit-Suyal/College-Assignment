#include <stdio.h>
int main() {
    int arr[100], n, i, j = 0, small, sec=99999;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements in the array : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    small=arr[0];
    for (i = 1; i < n; i++) {
        if (small > arr[i]) {
            small = arr[i];
            j = i;
        }
    }
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;
            i--;
        } 
        else {
            if (sec > arr[i]) {
                sec = arr[i];
            }
        }
    }
    printf("The Second smallest element in the array is: %d", sec);
    return 0;
}
