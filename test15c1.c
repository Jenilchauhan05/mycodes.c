// Find two largest elements in a one dimensional array.

#include<stdio.h>
#include<limits.h>
int main(){
    
    int n, i;
    printf("enter the number of elements in array ");
    scanf("%d", &n);
    
    int arr[n], largest = arr[0], second_largest = INT_MIN;
    printf("enter %d elements of array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 1; i < n; i++) {
        
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
        
    }
    
    printf("largest element %d :\n", largest);
    printf("second largest element %d :\n", second_largest);
    
}