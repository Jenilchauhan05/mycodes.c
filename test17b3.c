// Add two matrix using pointers.

#include<stdio.h>
void main(){
    
    int n, m, i, j;
    printf("enter total no of rows and columns of matrix ");
    scanf("%d %d", &n, &m);
    
    int mat1[n][m], mat2[n][m], sum[n][m];
    int *ptr1 = &mat1[0][0];
    int *ptr2 = &mat2[0][0];
    int *ptrsum = &sum[0][0];
    
    printf("enter elements of first matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", (ptr1 + i * m + j));
        }
    }
    
    printf("enter elements of second matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", (ptr2 + i * m + j));
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            *(ptrsum + i * m + j) = *(ptr1 + i * m + j) + *(ptr2 + i * m + j);
        }
    }
    
    printf("the resultant matrix is : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", *(ptrsum + i * m + j));
        }
        printf("\n");
    }
}