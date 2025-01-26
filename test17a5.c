//  Store n elements in an array and print the elements using pointer.

#include<stdio.h>
void main(){
    
    int n, i;
    printf("enter total no of elements in array ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;
    
    printf("enter %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }
    
    printf("elements in array are : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
}