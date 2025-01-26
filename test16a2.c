// Count number of positive, negative and zero elements from m X n matrix.

#include<stdio.h>
void main(){
    
    int m, n, i, j, pos=0, neg=0, zero=0;
    printf("enter number of rows and columns ");
    scanf("%d %d", &m, &n);
    
    int a[m][n];
    printf("enter elements in the matrix :\n");
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            
            if (a[i][j] > 0) {
                pos++;
            }
            
            else if (a[i][j] < 0) {
                neg++;
            }
            
            else {
                zero++;
            }
        }
    }
    
    printf("total number of positive elements in matrix : %d\n", pos);
    printf("total number of negative elements in matrix : %d\n", neg);
    printf("total number of zeros elements in matrix : %d\n", zero);
    
}