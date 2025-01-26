// Read a matrix and print diagonal elements and its sum.

#include<stdio.h>
void main(){
    
    int m, n, i, j, sum=0;
    printf("enter no of rows and columns of matrix ");
    scanf("%d %d", &m, &n);
    
    int a[m][n];
    printf("enter elements of matrix \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("diagonal elements are :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
        }
    }
    
    printf("\nsum of diagonal elements is : %d\n", sum);
    
}