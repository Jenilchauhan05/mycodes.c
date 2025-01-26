// Find Max, Min, Sum, Avg. of given numbers from an array.

#include<stdio.h>
void main(){
    
    int n, i, max, min, sum = 0;
    float avg;
    printf("enter number of elements in array ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of array :\n", n);
    
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
        
    for (i = 0; i < n; i++) {
            
    if (arr[i] > max) {
        max = arr[i];
    }
        
    if (arr[i] < min) {
        min = arr[i];
    }
        
    sum += arr[i];
        
    }
    
    avg = (float)sum / n;
    
    printf("maximum element of the array is %d\n", max);
    printf("minimum element of the array is %d\n", min);
    printf("sum of element of the array is %d\n", sum);
    printf("average of element of the array is %.2f\n", avg);
    
}