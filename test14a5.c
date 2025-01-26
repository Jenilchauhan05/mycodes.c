// Read ƒve person height and weight and count the number of person having height greater than 170 and weight less than 50.

#include<stdio.h>
void main(){
    
    int n, i, height = 0, weight = 0;
    int arr1[5], arr2[5];
    
    printf("enter elements of the array 1 :\n");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
        
        if (arr1[i] > 170) {
            height++;
        }
        
    }
    
    printf("enter elements of the array 2 :\n");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
        
        if (arr2[i] < 50) {
            weight++;
        }
        
    }
    
    printf("no of students which height greater than 170 is %d\n", height);
    printf("no of students which weight less than 50 is %d\n", weight);
    
}