// Reverse elements of an array without using second array. or
// Swap ƒrst element with last, second to second last and so on.

#include<stdio.h>
void main(){
    
    int n, i, temp;
    printf("enter the number of elements ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter the %d elmenets in array\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    printf("reversed array :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
}