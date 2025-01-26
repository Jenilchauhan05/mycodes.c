#include<stdio.h>
void main(){
    
    // Find factorial of the given number by for loop
    
    int n, i, fact = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        fact *= i;
        
    }
    
    printf("factorial of n is %d\n", fact);
    
}