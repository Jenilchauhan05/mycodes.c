// Count total duplicate elements in an array.

#include<stdio.h>
void main(){
    
    int n, i, j, count = 0, freq;
    printf("enter total number of elements in array ");
    scanf("%d", &n);
    
    int arr[n], visited[n];
    printf("enter %d elements of array\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    
    for (i = 0; i < n; i++) {
        
        if (visited[i] == 0) {
            freq = 1;
            
            for (j = i+1; j < n; j++) {
                
                if (arr[i] == arr[j]) {
                    freq++;
                    visited[j] = 1;
                }
            }
            
            if (freq > 1) {
                count++;
            }
            
        }
    }
    
    printf("total duplicate element : %d\n", count);
    
}