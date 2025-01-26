// Count number of positive or negative number from an array of n numbers.

#include<stdio.h>
void main(){
    
    int n, i, pos = 0, neg = 0;
    printf("enter number of elements ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] >= 0) {
            pos++;
        }
        
        else {
            neg++;
        }
        
    }
    
    printf("positive number of elements in array is %d\n", pos);
    printf("negative number of elements in array is %d\n", neg);
    
}