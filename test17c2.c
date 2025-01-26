// Sort array using pointers.

#include<stdio.h>
void main(){
    
    int n, i, j, temp;
    printf("enter total elements of array ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;
    
    printf("enter elements of array :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            
            if (*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    
    printf("sorted array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    
}