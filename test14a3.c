// Count number of even or odd number from an array of n numbers.

#include<stdio.h>
void main(){
    
    int n, i, even = 0, odd = 0;
    printf("enter number of elements ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0) {
            even++;
        }
        
        else {
            odd++;
        }
        
    }
    
    printf("even number of elements in array is %d\n", even);
    printf("odd number of elements in array is %d\n", odd);
    
}