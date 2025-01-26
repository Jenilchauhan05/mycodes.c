//  Perform Addition of two matrices.

#include<stdio.h>
void main(){
    
    int m, n, i, j;
    printf("enter number of rows and columns of matrix : ");
    scanf("%d %d", &m, &n);
    
    int mat1[m][n], mat2[m][n], res[m][n]; 
    printf("enter elements of 1st matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("enter elements of 2nd matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    printf("addition of matrices : \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        
        printf("\n");
    }
    
}
