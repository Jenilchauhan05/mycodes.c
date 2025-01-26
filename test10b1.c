#include<stdio.h>
void main(){
    
    // Check whether the given number is perfect or not.
    
    int n, i = 1, sum = 0, remainder;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (i < n) {
        
        if (n % i == 0) {
            sum += i;
        }
        
        i++;
        
    }
    
    if (sum == n) {
        printf("n is perfect number\n");
    }
    
    else {
        printf("n is not perfect number\n");
    }
    
}