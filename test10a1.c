#include<stdio.h>
void main(){
    
    // Find out sum of ƒrst and last digit of a given number.
    
    int n, first, last, sum = 0;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    last = n % 10;
    
    while (n >= 10) {
        n /= 10;
        first = n;
    }
    
    sum = first + last;
    printf("sum of first and last digit is %d\n", sum);
    
}