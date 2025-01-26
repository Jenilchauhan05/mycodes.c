// Print the upper triangular matrix.

#include<stdio.h>
void main(){
    
    int n, i, j;
    printf("enter no of rows and columns ");
    scanf("%d", &n);
    
    int a[n][n];
    printf("enter elements of the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("upper triangular matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            
            if (j >= i) {
                printf("%d ", a[i][j]);
            }
            
            else {
                printf("0 ");
            }
        }
        
        printf("\n");
        
    }
}