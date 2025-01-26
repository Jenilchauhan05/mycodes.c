// Read values in two-dimensional array and print them in matrix form.

#include<stdio.h>
void main(){
    
    int m, n, i, j;
    printf("enter number of rows and columns ");
    scanf("%d %d", &m, &n);
    
    int a[m][n];
    printf("enter the elements of matrix :\n");
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("matrix form :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        
        printf("\n");
        
    }
}