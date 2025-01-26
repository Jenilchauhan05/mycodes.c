// Delete all duplicate elements from an array.

#include<stdio.h>
void main(){
    
    int n, i, j, k;
    printf("enter the total number of elements in array ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of the array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        
        for (j = i + 1; j < n; j++) {
            
            if (arr[i] == arr[j]) {
                
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                
                n--;
                j--;
                
            }
        }
    }
    
    printf("array after removing duplicates elements \n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
}