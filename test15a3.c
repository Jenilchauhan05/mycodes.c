// Count number of elements divisible by 3 in array.

#include<stdio.h>
void main(){
    
    int n, i, count = 0;
    printf("enter total number of elements in array ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of the array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 3 == 0) {
            count++;
        }
        
    }
    
    printf("total number of elements which is divisible by 3 in array is : %d\n", count);
    
}