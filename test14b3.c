// Sort elements of an array in an ascending order.

#include<stdio.h>
void main(){
    
    int n, i, j, temp;
    printf("enter number of elemets in array ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of array\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr [j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
    
    printf("array in ascending order is :\n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
}