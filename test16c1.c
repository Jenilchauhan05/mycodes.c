// Check a given matrix is a sparse matrix or not.

#include<stdio.h>
void main(){
    
    int m, n, i, j, count = 0;
    printf("enter no of rows and column of matrix ");
    scanf("%d %d", &m, &n);
    
    int a[m][n], total = m * n;
    printf("enter elements of the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            
            if (a[i][j] == 0) {
                count++;
            }
        }
    }
    
    if (count > total/2) {
        printf("given matrix is spark matrix\n");
    }
    
    else {
        printf("given matrix is not spark matrix\n");
    }
    
}