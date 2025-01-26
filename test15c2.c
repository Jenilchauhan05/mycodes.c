//  Insert new value in the sorted array.

#include<stdio.h>
void main(){
    
    int n, i, value, pos;
    printf("enter the number of elements in array ");
    scanf("%d", &n);
    
    int arr[n + 1];
    printf("enter %d elemets of array :\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("enter the value to insert :\n");
    scanf("%d", &value);
    
    for (pos = 0; pos < n && arr[pos] < value; pos++);
        
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = value;
    n++;
    printf("array after insertion :\n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
}
