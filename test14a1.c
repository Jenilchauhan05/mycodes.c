// Read n numbers from user and print in normal and reverse order using array.

#include <stdio.h>
void main(){
    
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
        
    printf("Normal Order: ");
        
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nreverse order : ");
    
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
}
