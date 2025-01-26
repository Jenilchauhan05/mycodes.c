// Perform Multiplication of two matrices.

#include<stdio.h>
void main(){
    
    int m, n, p, q, i, j, k;
    printf("enter no of rows and columns of 1st matrix ");
    scanf("%d %d", &m, &n);
    printf("enter no of rows and columns of 2nd matrix ");
    scanf("%d %d", &p, &q);
    
    int a[m][n], b[p][q], res[m][q];
    printf("enter elements of 1st matrix \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("enter elements of 2nd matrix \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    if (n != p) {
        printf("these matrices cannot be multiplied \n");
    }
    
    else {
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                res[i][j] = 0;
                for (k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j]; 
                }
            }
        }
    }
    
    printf("multiplication of matrices is : \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    
}