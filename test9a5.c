#include<stdio.h>
void main(){
    
    // Find factors of the given number
    
    int n, i = 1, fact = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (i <= n) {
        
        if (n % i == 0) {
           fact = i;
           printf("factorial of n are %d\n", fact); 
        }
        
        i++;
        
    }
    
}