// Copy one array to another using pointers.

#include<stdio.h>
void main(){
    
    int n, i;
    printf("enter total no of elements in array ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    
    printf("enter %d elements in array\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr1 + i));
    }
    
    for (i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }
    
    printf("copied array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i));
    }
    
}