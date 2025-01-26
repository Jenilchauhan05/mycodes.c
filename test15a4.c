// Search elements in array.

#include<stdio.h>
void main(){
    
    int n, i, search, found = 0;
    printf("enter the total number of elements in array ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of the array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("enter the elements to search ");
    scanf("%d", &search);
    
    for (i = 0; i < n; i++) {
        
        if (arr[i] == search) {
            printf("%d element found at position %d\n", search, i+1);
            found = 1;
            break;
        }
        
    }
    
    if (!found) {
        printf("element %d not found in array\n", search);
    }
    
}