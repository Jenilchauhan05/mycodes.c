#include<stdio.h>
void main(){
    
    // Find whether the given number is prime or not using while.
    
    int n, i = 1, remainder = 0;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (i <= n) {
        
        if (n % i == 0) {
            remainder++;
        }
         i++;
    }
    
    if (remainder == 2) {
        printf("n is prime number\n");
    }
    
    else {
        printf("n is not prime number\n");
    }

}