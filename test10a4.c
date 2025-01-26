#include<stdio.h>
void main(){
    
    // Print digits of given number.
    
    int n, temp, divisor = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    temp = n; 

     while (temp >= 10) {
        temp /= 10;
        divisor *= 10;  
    }
    
    while (divisor > 0) {
        printf("%d ", n / divisor);  
        n %= divisor;  
        divisor /= 10;  
    }
    
}