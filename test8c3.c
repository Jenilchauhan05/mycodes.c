#include<stdio.h>
void main(){
    
    // Take two numbers input from user and perform a division operation and ƒnd out quotient and reminder (without using / and % operator)
    
    int a, b, remainder, quotient = 0, dividend, divisor;
    
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    if (a > b){
        dividend = a;
        divisor = b;
    }
    
    else {
        dividend = b;
        divisor = a;
    }
    
    remainder = dividend;
    
    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }
    
    printf("quotient is %d and remainder is %d\n", quotient, remainder);
     
}