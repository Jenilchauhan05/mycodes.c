// Count total number of negative elements in array.

#include<stdio.h>
void main(){
    
    int n, i, count = 0;
    printf("enter total number of the elements ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] < 0) {
            count++;
        }
        
    }
    
    printf("total number of negative elements in array is %d\n", count);
    
}