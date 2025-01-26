#include<stdio.h>
void main(){
    
    // Find factorial of the given number
    
    int n, i = 1, fact = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (i <= n) {
        fact = fact * i;
        i++;
    }
    
    printf("factorial of n is %d\n", fact);
    
}