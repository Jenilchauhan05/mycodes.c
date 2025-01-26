#include<stdio.h>
void main(){
    
    // Print multiplication table of a given number by for loop
    
    int n, i, mul = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    for (i = 1; i <= 10; i++) {
        
        mul = n * i;
        printf("%d x %d = %d\n", n, i, mul);
        
    }
    
}