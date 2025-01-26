#include<stdio.h>
void main(){
    
    // Check whether the given number is palindrome or not.
    
    int n, reverse = 0, remainder, original;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    original = n;
    
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    
    if (original == reverse) {
        printf("n is palindrome number\n");
    }
    
    else {
        printf("n is not palindrome number\n");
    }
    
}