// Swap two arrays using pointers.

#include<stdio.h>
void main(){
    
    int n, i, temp;
    printf("enter total elements of both arrays ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    
    printf("enter %d elements of first array :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr1 + i));
    }
    
    printf("enter %d elements of second array :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr2 + i));
    }
    
    for (i = 0; i < n; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
    
    printf("after swapping first array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr1 + i));
    }
    
    printf("\n");
    printf("after swapping second array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i));
    }
    
    printf("\n");
}