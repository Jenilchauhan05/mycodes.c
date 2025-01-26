// Find missing numbers of sequence using array.(in sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9)

#include<stdio.h>
void main(){
    
    int n, i;
    printf("enter total numbers of elements ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter %d elements of array\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = arr[0];
    printf("missing numbers are :\n");
    
    for (i = 0; i < n; i++) {
        
        while (arr[i] > count) {
            printf("%d ", count);
            count++;
        }
        
        count++;
        
    }
    
    printf("\n");
    
}