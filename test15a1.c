// Copy all elements of one array to another.

#include<stdio.h>
void main(){
    
    int n, i;
    printf("enter the total number of elements ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    printf("enter %d elements of array 1 :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("elements of the array 2 are :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
}