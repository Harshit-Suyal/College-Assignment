#include <stdio.h>
int main(){
    int i, j, k, m, n, temp, matrix[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            scanf(" %d", &matrix[i][j]);}
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (k = (j + 1); k < n; k++) {
                if (matrix[i][j] > matrix[i][k]) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
        }
    }
    printf("Matrix after sorting row elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}