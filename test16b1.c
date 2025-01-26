//  Print Transpose of a matrix.

#include<stdio.h>
void main(){
    
    int m, n, i, j;
    printf("enter no. of rows and columns of matrix ");
    scanf("%d %d", &m, &n);
    
    int mat[m][n], tran[n][m];
    printf("enter elements of matrix :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            tran[j][i] = mat[i][j];
        }
    }
    
    printf("tranpose matrix is : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", tran[i][j]);
        }
        
        printf("\n");
        
    }
    
}