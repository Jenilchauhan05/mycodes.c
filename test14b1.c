// Count numbers higher than the average of an array.

#include<stdio.h>
void main(){
    
    int n, i, sum = 0, count = 0;
    float avg;
    
    printf("enter number of elements in array ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements in array\n", n);
    
    for (i = 0; i < n; i++) {
        
        scanf("%d", &arr[i]);
        sum += arr[i];
        
    }
    
    avg = (float)sum / n;
    
    for (i = 0; i < n; i++) {
        
        if (arr[i] > avg) {
            count++;
        }
        
    }
    
    printf("number higher than the average of an array is %d\n", count);
    
}